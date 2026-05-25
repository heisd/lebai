#include "rclcpp/rclcpp.hpp"
#include "grab_demo/srv/grab_object.hpp"
#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <cmath>
#include <deque>

enum class GrabState {
    IDLE,           // 空闲状态
    DETECTING,      // 检测物体
    OBJECT_STABLE,  // 物体位置稳定
    GRABBING,       // 正在抓取
    WAITING         // 等待下一次检测
};

class AutoGrabController : public rclcpp::Node
{
public:
    AutoGrabController() : Node("auto_grab_controller"),
                          tf_buffer_(this->get_clock()),
                          tf_listener_(tf_buffer_)
    {
        // 声明参数
        this->declare_parameter<std::string>("target_frame", "detected_object");
        this->declare_parameter<std::string>("base_frame", "base_link");
        this->declare_parameter<double>("stability_threshold", 0.01);  // 位置变化阈值（米）
        this->declare_parameter<int>("stability_frames", 10);          // 需要稳定的帧数
        this->declare_parameter<double>("detection_rate", 10.0);       // 检测频率（Hz）
        this->declare_parameter<double>("wait_after_grab", 3.0);       // 抓取后等待时间（秒）
        this->declare_parameter<bool>("auto_start", true);             // 是否自动开始

        target_frame_ = this->get_parameter("target_frame").as_string();
        base_frame_ = this->get_parameter("base_frame").as_string();
        stability_threshold_ = this->get_parameter("stability_threshold").as_double();
        stability_frames_ = this->get_parameter("stability_frames").as_int();
        double detection_rate = this->get_parameter("detection_rate").as_double();
        wait_after_grab_ = this->get_parameter("wait_after_grab").as_double();
        bool auto_start = this->get_parameter("auto_start").as_bool();

        RCLCPP_INFO(this->get_logger(), "自动抓取控制器已启动");
        RCLCPP_INFO(this->get_logger(), "目标坐标系: %s", target_frame_.c_str());
        RCLCPP_INFO(this->get_logger(), "基础坐标系: %s", base_frame_.c_str());
        RCLCPP_INFO(this->get_logger(), "稳定性阈值: %.3f 米", stability_threshold_);
        RCLCPP_INFO(this->get_logger(), "需要稳定帧数: %d", stability_frames_);

        // 创建抓取服务客户端
        grab_client_ = this->create_client<grab_demo::srv::GrabObject>("obj_grab_service");

        // 创建定时器
        auto timer_period = std::chrono::duration<double>(1.0 / detection_rate);
        timer_ = this->create_wall_timer(
            std::chrono::duration_cast<std::chrono::milliseconds>(timer_period),
            std::bind(&AutoGrabController::timerCallback, this));

        current_state_ = auto_start ? GrabState::DETECTING : GrabState::IDLE;

        if (auto_start) {
            RCLCPP_INFO(this->get_logger(), "自动抓取已启动，正在检测物体...");
        } else {
            RCLCPP_INFO(this->get_logger(), "自动抓取未启动，等待手动触发");
        }
    }

private:
    void timerCallback()
    {
        switch (current_state_) {
            case GrabState::IDLE:
                // 空闲状态，不做任何事
                break;

            case GrabState::DETECTING:
                detectObject();
                break;

            case GrabState::OBJECT_STABLE:
                startGrabbing();
                break;

            case GrabState::GRABBING:
                // 等待抓取完成
                break;

            case GrabState::WAITING:
                checkWaitComplete();
                break;
        }
    }

    void detectObject()
    {
        geometry_msgs::msg::TransformStamped transform;
        try {
            // 尝试获取 TF 变换
            transform = tf_buffer_.lookupTransform(
                base_frame_, target_frame_,
                tf2::TimePointZero,
                rclcpp::Duration::from_seconds(0.1));

            // 提取位置
            double x = transform.transform.translation.x;
            double y = transform.transform.translation.y;
            double z = transform.transform.translation.z;

            // 添加到位置历史
            position_history_.push_back({x, y, z});
            if (position_history_.size() > static_cast<size_t>(stability_frames_)) {
                position_history_.pop_front();
            }

            // 检查位置是否稳定
            if (isPositionStable()) {
                RCLCPP_INFO(this->get_logger(),
                           "检测到稳定物体，位置: (%.3f, %.3f, %.3f)", x, y, z);
                current_state_ = GrabState::OBJECT_STABLE;
            } else {
                // 每隔一段时间打印检测状态
                static int detect_count = 0;
                detect_count++;
                if (detect_count % 30 == 0) {
                    RCLCPP_INFO(this->get_logger(),
                               "检测到物体但位置不稳定，历史记录: %zu/%d",
                               position_history_.size(), stability_frames_);
                }
            }

        } catch (tf2::TransformException &ex) {
            // 没有检测到物体，清空历史
            if (!position_history_.empty()) {
                RCLCPP_WARN(this->get_logger(), "物体丢失，清空位置历史");
                position_history_.clear();
            }

            // 每隔一段时间打印等待状态
            static int wait_count = 0;
            wait_count++;
            if (wait_count % 100 == 0) {
                RCLCPP_INFO(this->get_logger(), "等待检测物体...");
            }
        }
    }

    bool isPositionStable()
    {
        if (position_history_.size() < static_cast<size_t>(stability_frames_)) {
            return false;
        }

        // 计算所有位置的平均值
        double avg_x = 0, avg_y = 0, avg_z = 0;
        for (const auto& pos : position_history_) {
            avg_x += pos[0];
            avg_y += pos[1];
            avg_z += pos[2];
        }
        avg_x /= position_history_.size();
        avg_y /= position_history_.size();
        avg_z /= position_history_.size();

        // 检查每个位置与平均值的偏差
        for (const auto& pos : position_history_) {
            double dx = pos[0] - avg_x;
            double dy = pos[1] - avg_y;
            double dz = pos[2] - avg_z;
            double distance = std::sqrt(dx*dx + dy*dy + dz*dz);

            if (distance > stability_threshold_) {
                return false;
            }
        }

        return true;
    }

    void startGrabbing()
    {
        RCLCPP_INFO(this->get_logger(), "开始抓取流程...");
        current_state_ = GrabState::GRABBING;

        // 等待服务可用
        while (!grab_client_->wait_for_service(std::chrono::seconds(1))) {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "等待服务时被中断");
                current_state_ = GrabState::DETECTING;
                return;
            }
            RCLCPP_WARN(this->get_logger(), "等待抓取服务可用...");
        }

        // 创建服务请求
        auto request = std::make_shared<grab_demo::srv::GrabObject::Request>();
        request->obj_link = target_frame_;

        RCLCPP_INFO(this->get_logger(), "调用抓取服务，目标: %s", target_frame_.c_str());

        // 异步调用服务
        auto future = grab_client_->async_send_request(request,
            std::bind(&AutoGrabController::grabResponseCallback, this, std::placeholders::_1));
    }

    void grabResponseCallback(rclcpp::Client<grab_demo::srv::GrabObject>::SharedFuture future)
    {
        auto response = future.get();

        if (response->success) {
            RCLCPP_INFO(this->get_logger(), "✓ 抓取成功: %s", response->message.c_str());
            RCLCPP_INFO(this->get_logger(), "等待 %.1f 秒后继续检测...", wait_after_grab_);
        } else {
            RCLCPP_ERROR(this->get_logger(), "✗ 抓取失败: %s", response->message.c_str());
            RCLCPP_INFO(this->get_logger(), "等待 %.1f 秒后重试...", wait_after_grab_);
        }

        // 清空位置历史
        position_history_.clear();

        // 进入等待状态
        current_state_ = GrabState::WAITING;
        wait_start_time_ = this->now();
    }

    void checkWaitComplete()
    {
        auto elapsed = (this->now() - wait_start_time_).seconds();

        if (elapsed >= wait_after_grab_) {
            RCLCPP_INFO(this->get_logger(), "等待完成，继续检测物体...");
            current_state_ = GrabState::DETECTING;
        } else {
            // 每秒打印一次倒计时
            static int last_second = -1;
            int current_second = static_cast<int>(elapsed);
            if (current_second != last_second) {
                last_second = current_second;
                RCLCPP_INFO(this->get_logger(), "等待中... (%.0f/%.0f 秒)",
                           elapsed, wait_after_grab_);
            }
        }
    }

    // TF 相关
    tf2_ros::Buffer tf_buffer_;
    tf2_ros::TransformListener tf_listener_;

    // 服务客户端
    rclcpp::Client<grab_demo::srv::GrabObject>::SharedPtr grab_client_;

    // 定时器
    rclcpp::TimerBase::SharedPtr timer_;

    // 状态机
    GrabState current_state_;

    // 参数
    std::string target_frame_;
    std::string base_frame_;
    double stability_threshold_;
    int stability_frames_;
    double wait_after_grab_;

    // 位置历史（用于稳定性检测）
    std::deque<std::array<double, 3>> position_history_;

    // 等待计时
    rclcpp::Time wait_start_time_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<AutoGrabController>();

    RCLCPP_INFO(node->get_logger(), "自动抓取控制器正在运行...");
    RCLCPP_INFO(node->get_logger(), "按 Ctrl+C 停止");

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
