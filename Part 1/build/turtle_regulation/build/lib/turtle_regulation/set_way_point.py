import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
import math

class SetWayPointNode(Node):

    def __init__(self):
        super().__init__('set_way_point')
        
        # Attribut de la pose de la tortue
        self.pose = Pose()
        
        # Waypoint défini à (7, 7)
        self.waypoint = (7.0, 7.0)
        
        # Constante de régulation Kp (peut être ajustée)
        self.Kp = 1.0

        # Souscription au topic 'pose' de type turtlesim/Pose
        self.subscription = self.create_subscription(
            Pose,
            'pose',
            self.pose_callback,
            10)
        
        # Publication sur cmd_vel pour la commande de vitesse
        self.publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        
    def pose_callback(self, msg):
        self.pose = msg
        self.calculate_and_publish()

    def calculate_and_publish(self):
        # Calcul de l'angle désiré (angle entre la tortue et le waypoint)
        angle_desired = math.atan2(self.waypoint[1] - self.pose.y, self.waypoint[0] - self.pose.x)

        # Calcul de l'erreur en cap
        error = math.atan2(math.sin(angle_desired - self.pose.theta), math.cos(angle_desired - self.pose.theta))

        # Commande de vitesse angulaire en Z
        u = self.Kp * error

        # Créer et publier la commande cmd_vel
        cmd_vel = Twist()
        cmd_vel.angular.z = u
        self.publisher.publish(cmd_vel)
        self.get_logger().info(f"Erreur en cap: {error}, Commande u: {u}")

def main(args=None):
    rclpy.init(args=args)

    node = SetWayPointNode()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '_main_':
    main()
