#include <rclcpp/rclcpp.hpp>
#include <lebai_interfaces/srv/move_joint.hpp>
#include <lebai_interfaces/srv/move_line.hpp>
// 这是教程
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("move_example");

  // 创建一个moviet_joint服务客户端，声明我要调用这个move_join_service服务
  rclcpp::Client<lebai_interfaces::srv::MoveJoint>::SharedPtr move_joint_client =
      node->create_client<lebai_interfaces::srv::MoveJoint>("/motion_service/move_joint");

  // Wait for service.
  move_joint_client->wait_for_service();
  RCLCPP_INFO(node->get_logger(), "Move joint service exist.");

  // 创建一个move_joint服务请求数据
  auto move_joint_req = std::make_shared<lebai_interfaces::srv::MoveJoint::Request>();
  // 客户端请求motion_node 节点执行move_joint服务，要求机械臂移动到指定的关节位置
  // 初始化服务里面相关参数
  move_joint_req->joint_pose = {-0.515705166127304, -1.383938292070577, 0.9317015810420413, -1.0843326694366626, -0.8334309368181174, -0.7919175817459623};
  move_joint_req->is_joint_pose = 1;
  move_joint_req->common.vel = 0.2;
  move_joint_req->common.acc = 1.0;

  // 调用服务
  // aysnc_send_request 是异步调用服务的意思
  // 它会立即返回一个future对象，我们可以通过这个future对象来获取服务调用的结果
  auto move_joint_result = move_joint_client->async_send_request(move_joint_req);
  // 检查通信是否调用成功
  if (rclcpp::spin_until_future_complete(node, move_joint_result) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(node->get_logger(), "Successed to call move joint");
    // 检测服务的返回值看看有没有问题，看看是不是机械臂成功执行了运动
    auto response = move_joint_result.get();
    if (response->ret){
      
      RCLCPP_INFO(node->get_logger(), "Move joint executed successfully.");
    }
    else{
      RCLCPP_ERROR(node->get_logger(), "Move joint execution failed.");
    }
  }
  else
  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call move joint");
  }


  // 创建一个moviet_line服务客户端，声明我要调用这个move_line_service服务
  rclcpp::Client<lebai_interfaces::srv::MoveLine>::SharedPtr move_line_client =
      node->create_client<lebai_interfaces::srv::MoveLine>("/motion_service/move_line");

  // Wait for service.
  move_line_client->wait_for_service();
  RCLCPP_INFO(node->get_logger(), "Move line service exist.");

  // generate a move line srv data.
  // 调用srv
  auto move_line_req = std::make_shared<lebai_interfaces::srv::MoveLine::Request>();
  move_line_req->joint_pose = {-1.9979141024218048, -1.1726324385393299, 0.9936360553529241, -1.0942076707586763, -0.849345987492431, -0.8172282647460754};;
  move_line_req->is_joint_pose = 1;
  move_line_req->common.vel = 0.2;
  move_line_req->common.acc = 1.0;

  // Call service.

  auto move_line_result = move_line_client->async_send_request(move_line_req);
  if (rclcpp::spin_until_future_complete(node, move_line_result) ==
      rclcpp::FutureReturnCode::SUCCESS)
  {
    RCLCPP_INFO(node->get_logger(), "Successed to call move line");
  }
  else
  {
    RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call move line");
  }
  rclcpp::shutdown();
  return 0;
}