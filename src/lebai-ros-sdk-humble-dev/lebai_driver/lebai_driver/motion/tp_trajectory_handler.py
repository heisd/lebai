from lebai.type import JointPose, JointPose, CartesianPose
from lebai_interfaces.srv import MoveJoint
from lebai_interfaces.srv import MoveLine
# from lebai_interfaces.srv import MoveCircle
from rclpy.node import Node
from lebai import LebaiRobot
import tf_transformations



# 处理TP轨迹的服务,更新了服务的返回值 @li 添加了异常捕获和日志打印
    class TPTrajectoryHandler:
    def __init__(self, node: Node, lebai_robot: LebaiRobot):
        self.node_ = node
        self.lebai_robot_ = lebai_robot
        self.srv_move_joint_ = self.node_.create_service(MoveJoint, self.node_.get_name()+'/move_joint', self.cmd_move_joint)
        self.srv_move_line_ = self.node_.create_service(MoveLine, self.node_.get_name()+'/move_line', self.cmd_move_line)
        # self.srv_move_circle_ = rospy.Service(rospy.resolve_name('~move_circle'), MoveCircle, self.cmd_move_circle)
    # 服务的处理在这个文件里面
    def cmd_move_joint(self, request: MoveJoint.Request, response: MoveJoint.Response):
        # 从客户端的请求里面获取数据
        # 判断是关节空间还是笛卡尔空间
        pose_is_joint_angle = request.is_joint_pose
        acc = request.common.acc
        vel = request.common.vel
        time = request.common.time
        radius = request.common.radius
        # 根据是关节空间还是笛卡尔空间调用不同的接口
        # 关节空间
        # 这里我们设置的is_joint_pose是True，所以会走这个分支
        if pose_is_joint_angle:
            # 优化点：可以在这里添加异常捕获
            try:
                self.lebai_robot_.movej(JointPose(request.joint_pose), acc, vel, time, radius)
                request.ret = True
            except Exception as e:
                request.ret = False
                # 打印错误信息
                self.node_.get_logger().error(f"Error in move_joint: {e}")
        # 笛卡尔空间
        # 更关注我们的机器人的末端的位置
        else:
            quat_msg = request.cartesian_pose.orientation
            quat_tf = [quat_msg.x, quat_msg.y,quat_msg.z, quat_msg.w]            
            euler = tf_transformations.euler_from_quaternion(quat_tf)
            pose = CartesianPose(request.cartesian_pose.position.x, request.cartesian_pose.position.y, request.cartesian_pose.position.z
            ,euler[2],euler[1],euler[0])
            # 同样我们在这里也可以添加异常捕获
            try:
                self.lebai_robot_.movej(pose, acc, vel, time, radius)
            except Exception as e:
                request.ret = False
                # 打印错误信息
                self.node_.get_logger().error(f"Error in move_joint: {e}")
        return response

    def cmd_move_line(self, request: MoveLine.Request, response: MoveLine.Response):
        pose_is_joint_angle = request.is_joint_pose
        acc = request.common.acc
        vel = request.common.vel
        time = request.common.time
        radius = request.common.radius
        if pose_is_joint_angle:
            try:
                self.lebai_robot_.movel(JointPose(request.joint_pose), acc, vel, time, radius)
            except Exception as e:
                request.ret = False
                # 打印错误信息
                self.node_.get_logger().error(f"Error in move_line: {e}")
        else:
            quat_msg = request.cartesian_pose.orientation
            quat_tf = [quat_msg.x, quat_msg.y,quat_msg.z, quat_msg.w]            
            euler = tf_transformations.euler_from_quaternion(quat_tf)
            pose = CartesianPose(request.cartesian_pose.position.x, request.cartesian_pose.position.y, request.cartesian_pose.position.z
            ,euler[2],euler[1],euler[0])
            try:
                self.lebai_robot_.movel(pose, acc, vel, time, radius)
            except Exception as e:
                request.ret = False
                # 打印错误信息
                self.node_.get_logger().error(f"Error in move_line: {e}")
        response.ret = True
        return response