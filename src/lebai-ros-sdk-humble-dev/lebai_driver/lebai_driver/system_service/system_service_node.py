import rclpy
from lebai_driver.system_service.system_service_interface import SystemServiceInterface
# 这个其实就是调用上面的system_service_interface.py接口服务
def main(args=None):
    rclpy.init(args=None)
    ssi = SystemServiceInterface()
    rclpy.spin(ssi)
    ssi.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    try:
        main()
    except Exception as e:
        pass
