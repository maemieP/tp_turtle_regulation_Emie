import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import Bool
import math


class SetWayPointNode(Node):
    def __init__(self):
        super().__init__('set_way_point')

        # Souscription à la position de la tortue
        self.subscription = self.create_subscription(
            Pose,
            '/turtle1/pose',
            self.pose_callback,
            10
        )

        # Publisher pour envoyer les commandes
        self.publisher_cmd_vel = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.publisher_is_moving = self.create_publisher(Bool, 'is_moving', 10)

        # Waypoint (objectif)
        self.waypoint = (7.0, 7.0)

        # Constantes de régulation
        self.Kp_angle = 2.0
        self.Kp_linear = 1.5

        # Seuil de tolérance
        self.distance_tolerance = 0.2

        # Position actuelle de la tortue
        self.current_pose = None

    def pose_callback(self, msg):
        self.current_pose = msg

        x = msg.x
        y = msg.y
        theta = msg.theta  # orientation actuelle

        x_goal, y_goal = self.waypoint

        # Calcul de l'angle désiré
        angle_to_goal = math.atan2(y_goal - y, x_goal - x)

        # Erreur de cap
        angle_error = math.atan2(math.sin(angle_to_goal - theta), math.cos(angle_to_goal - theta))

        # Erreur linéaire = distance euclidienne
        distance_error = math.sqrt((x_goal - x)*2 + (y_goal - y)*2)

        # Commande à envoyer
        cmd = Twist()

        if distance_error > self.distance_tolerance:
            # Vitesse angulaire (régulation en cap)
            cmd.angular.z = self.Kp_angle * angle_error
            # Vitesse linéaire (régulation en distance)
            cmd.linear.x = self.Kp_linear * distance_error

            self.publisher_is_moving.publish(Bool(data=True))
        else:
            # On s'arrête
            cmd.angular.z = 0.0
            cmd.linear.x = 0.0
            self.publisher_is_moving.publish(Bool(data=False))

        # On publie la commande
        self.publisher_cmd_vel.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = SetWayPointNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '_main_':
    main()
