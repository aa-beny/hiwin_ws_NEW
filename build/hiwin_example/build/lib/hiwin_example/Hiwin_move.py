#!/usr/bin/env python3
import time
import rclpy
from enum import Enum
from threading import Thread
from rclpy.node import Node
from rclpy.task import Future
from typing import NamedTuple
from geometry_msgs.msg import Twist

from hiwin_interfaces.srv import RobotCommand
# from YoloDetector import YoloDetectorActionClient

DEFAULT_VELOCITY = 50
DEFAULT_ACCELERATION = 100

VACUUM_PIN = 2

PHOTO_POSE = [0.00, 0.00, 0.00, 0.00, -90.00, 0.00]
home_POSE = [321.022, 187.294, 537.027, 180.00, 0.00, 90.00]
middlem_POSE = [31.863, 455.792, 27, 180.00, 0.00, 90.00]

# OBJECT_XX = [ big(0), midium(1）, small(2)]

OBJECT_POSE = [ #判別完大中小放的位置
    [141.212,610.257, 157.034,  -180.00, 0.00, 90.00],  [122.001,432.650, 109.420,  -180.00, 0.00, 90.00],  [122.001, 287.075, 33.031, 180.00, 0.00, 90.00]
    ]
OBJECT_POSEM = [ #判別完大中小放的位置
    [91.326, 638.138, 144.520, -180.00, -0.00, 90.00],  [91.326, 516.138, 69.520, -180.00, 0.00, 90.00],  [91.326, 416.602, -9.375, 180.00, 0.00, 90.00]
    ]
# OBJECT_SIZE_TOTAL = [ 9, 9, 7]  # 每個物件size總數
OBJECT_SIZE_CNT = [ 0, 0, 0]    # 每個物件size計數器
OBJECT_SIZE = [ 70, 55, 30]     # 每個物件size
OBJECT_MOVE_AXISY = [ 80, 80, 80]   # 每個物件size移到Y軸下一列位置

PICK_POSE = [  # 4個訂單的位置
    [-170.921, 551.154, 37.159, -157.547,-24.874, 35.765],
    [320.843, 367.558,  -12.011,  -180.00, 0.00, 90.00],
    [320.843, 467.558,  -12.011,  -180.00, 0.00, 90.00],
    [320.843, 547.558,  -12.011,  -180.00, 0.00, 90.00]
    ]

# PLACE_POSE_AXISZ = [ 40.718, 115.231, 169.340, 50.00, 100.00, 100.00]


# only for example as we don't use yolo here

# assume NUM_OBJECTS=5, then this process will loop 5 times
NUM_OBJECTS = 12# 物件總數
NUM_OBJECTS_CNT = 0   # 物件計數器                                  
OBJECT_CRUUENT_SUBHIGH = 0 # 目前物件要減去的高度
OBJECT_CRUUENT_SIZE = 0 # 目前正在操作的物件大小




OBJECT_POSE_INDEX = [] # 要操作的物件size位置
PICK_POSE_INDEX  = [ 0, 0, 0, 1, 1, 1, 2, 2, 2 ,3 ,3 ,3]
# PLACE_POSE_INDEX = [ 0, 0, 0, 1, 1, 1, 2, 2, 2]
# if(是大)
# OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==0
# if(是中)
# OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1
# if(是小)
# OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2

#OBJECT_POSE[ OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ]
#PLACE_POSE[ PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ]

class States(Enum):
    INIT = 0
    FINISH = 1
    MOVE_TO_PHOTO_POSE = 2
    YOLO_DETECT = 3
    MOVE_TO_OPJECT_TOP = 4
    PICK_OBJECT = 5
    MOVE_TO_PLACE_POSE = 6
    CHECK_POSE = 7
    CLOSE_ROBOT = 8
    MOVE_TO_TABLE =  9
   
    PICK_TABLE = 10
    PLACE_TABLE = 11
    MOVE_TO_TABLE_TOP = 12
    MOVE_TO_PLACE_POSE_TOP = 13
    MOVE_TO_home= 14
    MOVE_TO_PHOTO_POSE_home= 15
    MOVE_TO_PICK_POSE = 16
    MOVE_TO_PICK_POSE_TOP = 17
    MOVE_TO_PICK_POSE_TOP2 =18
    MOVE_TO_MIDDLE = 19
    MOVE_TO_MIDDLE2= 20


class ExampleStrategy(Node):

    def __init__(self):
        super().__init__('example_strategy')
        self.hiwin_client = self.create_client(RobotCommand, 'hiwinmodbus_service')
        self.object_pose = None
        self.object_cnt = 0


    def _state_machine(self, state: States) -> States:
        global NUM_OBJECTS_INDEX
        global NUM_OBJECTS_CNT
        global OBJECT_CRUUENT_SUBHIGH
        global OBJECT_POSE_INDEX

        req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.READ_DI,
                    digital_input_pin=2,
                    holding=False
                )
        res = self.call_hiwin(req)
        
        if state == States.INIT:
            self.get_logger().info('INIT')
            if res.digital_state==False:
                return States.INIT 
            nest_state = States.MOVE_TO_PHOTO_POSE

        elif state == States.MOVE_TO_PHOTO_POSE: #移到原點
            self.get_logger().info('MOVE_TO_PHOTO_POSE')
            pose = Twist()
            [pose.linear.x, pose.linear.y, pose.linear.z] = home_POSE[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = home_POSE[3:6]
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.HOME,
                base=30
                # velocity=150
                # pose=pose
                )
            # req = self.generate_robot_request(
            #     cmd_type=RobotCommand.Request.JOINTS_CMD,
            #     joints=PHOTO_POSE
            #     )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_PICK_POSE_TOP
            else:
                nest_state = None

        
        elif state == States.MOVE_TO_PICK_POSE_TOP:
            self.get_logger().info('MOVE_TO_PICK_POSE_TOP')
            pose = Twist()
            PICK_POSE_1 = PICK_POSE[ PICK_POSE_INDEX[NUM_OBJECTS_CNT] ]
            # if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==0:# 直接動y軸
            #     PLACE_POSE_1[2] += OBJECT_SIZE[0]
            # if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1:
            #     PLACE_POSE_1[2] += OBJECT_SIZE[1]
            # if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:
            #     PLACE_POSE_1[2] += OBJECT_SIZE[2]
       
            [pose.linear.x, pose.linear.y, pose.linear.z] = PICK_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PICK_POSE_1[3:6]
            pose.linear.z += 30 #到物體的上方點

            
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                tool=1,
                pose=pose,
                base=30
                )
            res = self.call_hiwin(req)
            
  
            
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_PICK_POSE
            else:
                nest_state = None

        elif state == States.MOVE_TO_PICK_POSE:

            self.get_logger().info('MOVE_TO_PICK_POSE')

            pose = Twist()
            PICK_POSE_1 = PICK_POSE[ PICK_POSE_INDEX[NUM_OBJECTS_CNT] ]
            [pose.linear.x, pose.linear.y, pose.linear.z] = PICK_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PICK_POSE_1[3:6]
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                digital_output_pin=VACUUM_PIN,
                holding=False,
                pose=pose
     
            )
            res = self.call_hiwin(req)
            
            downcount=0
            while True:
                
                # res = self.call_hiwin(req)
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,  # 使用PTP（點對點）模式移動到指定姿勢
                    tool=1,
                    base=30,
                    pose=pose
                )  # 將設置好的Twist物件作為姿勢參數傳遞給生成的機器人請求
                # self.get_logger().info('down again')
                res = self.call_hiwin(req)
                time.sleep(2)
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.READ_DI,
                    digital_input_pin=1,
                    holding=False
                )
                res = self.call_hiwin(req)
                downcount+=1
                if downcount == 1 and res.digital_state==True:
                    self.get_logger().info('big')
                    OBJECT_POSE_INDEX.append(0)
                    # OBJECT_SIZE_CNT [0]+=1
                    break
                elif downcount == 2 and res.digital_state==True:
                    self.get_logger().info('mid')
                    OBJECT_POSE_INDEX.append(1)
                    
                    # OBJECT_SIZE_CNT [1]+=1
                    break
                elif downcount == 3 and res.digital_state==True:
                    self.get_logger().info('small')
                    OBJECT_POSE_INDEX.append(2)
                    # OBJECT_SIZE_CNT [2]+=1
                    break
                else:
                    if downcount == 2:
                        self.get_logger().info('down again1')
                        pose.linear.z -= 15 #只要下降三次各約15
                        pose.linear.x += 10
                        pose.linear.y += 9
                        

                    if downcount == 3:
                        self.get_logger().info('down again2')
                        pose.linear.z -= 25 #只要下降三次各約15
                        pose.linear.x += 9
                        pose.linear.y += 7
                    else:
                        continue
                  
 
            # [pose.linear.x, pose.linear.y, pose.linear.z] = PICK_POSE_1[0:3]
            # [pose.angular.x, pose.angular.y, pose.angular.z] = PICK_POSE_1[3:6]
            # req = self.generate_robot_request(
            #     cmd_mode=RobotCommand.Request.LINE,
            #     # velocity=130,
            #     pose=pose
            #     )

            
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.WAITING
            )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_PICK_POSE_TOP2
            else:
                nest_state = None

        elif state == States.MOVE_TO_PICK_POSE_TOP2:
            self.get_logger().info('MOVE_TO_PICK_POSE_TOP')
            pose = Twist()
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 1 :
            
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                    digital_output_pin=3,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            PICK_POSE_1 = PICK_POSE[ PICK_POSE_INDEX[NUM_OBJECTS_CNT] ]
            # if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==0:# 直接動y軸
            #     PLACE_POSE_1[2] += OBJECT_SIZE[0]
            # if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1:
            #     PLACE_POSE_1[2] += OBJECT_SIZE[1]
            # if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:
            #     PLACE_POSE_1[2] += OBJECT_SIZE[2]
       
            [pose.linear.x, pose.linear.y, pose.linear.z] = PICK_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PICK_POSE_1[3:6]
            pose.linear.z += 30 #到物體的上方點

            
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                tool=1,
                pose=pose,
                base=30
                )
            res = self.call_hiwin(req)
  
            
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_MIDDLE
            else:
                nest_state = None

        elif state == States.MOVE_TO_MIDDLE:
            self.get_logger().info('MOVE_TO_MIDDLE')
            pose = Twist()
       
            [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE[3:6]
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                # velocity=150,
                pose=pose
                )
            res = self.call_hiwin(req)

            pose.linear.x += 50
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.LINE,
                base=30,
                # velocity=150,
                pose=pose
                )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_PLACE_POSE_TOP
            else:
                nest_state = None

            # if res.arm_state == RobotCommand.Response.IDLE:
            #     nest_state = States.MOVE_TO_OPJECT_TOP
            # else:
            #     nest_state = None




        elif state == States.MOVE_TO_PLACE_POSE_TOP:
            self.get_logger().info('MOVE_TO_PLACE_POSE_TOP')
            
            pose = Twist()
          
            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]  # 讀現在是大中小那一個
            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1]         # 去那個位置
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]

            OBJECT_CRUUENT_SIZE = OBJECT_SIZE[OBJECT_POSE_INDEX_1] # 讀大中小的size

            OBJECT_CRUUENT_SUBHIGH = (2-( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) )* OBJECT_CRUUENT_SIZE# 要下去多少高度
            # if ( (( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1] - 1) / 3) == ( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] / 3) ): #判斷是否是size最後一堆
            # OBJECT_CRUUENT_SUBHIGH = ( 3- ( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1]  - OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] ) ) * OBJECT_CRUUENT_SIZE# 要下去多少高度


            pose.linear.z = pose.linear.z - OBJECT_CRUUENT_SUBHIGH +20   # size 最高點 - 目前size的高度 ＋ 往上調整
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                # velocity=150,
          
                pose=pose
                )
            res = self.call_hiwin(req)
            
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_PLACE_POSE
            else:
                nest_state = None

        elif state == States.MOVE_TO_PLACE_POSE:
            self.get_logger().info('MOVE_TO_PLACE_POSE')
            pose = Twist()


            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]
            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1 ]
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]
            OBJECT_CRUUENT_SIZE = OBJECT_SIZE[OBJECT_POSE_INDEX_1] # 讀大中小的size

            OBJECT_CRUUENT_SUBHIGH = (2-( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) )* OBJECT_CRUUENT_SIZE
            OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] += 1
            # pose.linear.z = pose.linear.z - OBJECT_CRUUENT_SUBHIGH - 2

            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.LINE,
                base=30,
                # holding=False,
                # velocity=130,
                pose=pose
            )
            res = self.call_hiwin(req)
            
            print(res)
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                digital_output_pin=VACUUM_PIN,
                holding=True,
                pose=pose
            )
            res = self.call_hiwin(req)
            
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 1 :
            
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                    digital_output_pin=3,
                    holding=True,
                    pose=pose
                )
            pose.linear.z += 30
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.LINE,
                base=30,
                # velocity=130,
                pose=pose
            )
            res = self.call_hiwin(req)

            if ( (OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] > 0) and ( (OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) == 0) ):# 那一列拿完了
                OBJECT_POSE[ OBJECT_POSE_INDEX_1 ][0] += OBJECT_MOVE_AXISY[OBJECT_POSE_INDEX_1]# x軸移動到下一個高度
            
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_MIDDLE2
            else:
                nest_state = None

            
        elif state == States.MOVE_TO_MIDDLE2:
            self.get_logger().info('MOVE_TO_MIDDLE2')
            pose = Twist()
       
            [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE[3:6]
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                # velocity=150,
                pose=pose
                )
            res = self.call_hiwin(req)

            pose.linear.x += 50
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.LINE,
                base=30,
                # velocity=150,
                pose=pose
                )
            res = self.call_hiwin(req)
  
            
            
            if res.arm_state == RobotCommand.Response.IDLE:
                print("oooooooooooooooooooooooooooo")
                NUM_OBJECTS_CNT += 1
                if NUM_OBJECTS_CNT < NUM_OBJECTS:
                    print("ppppppppppppppppppppppppppppp")
                    nest_state = States.MOVE_TO_PICK_POSE_TOP
                else:                   
                    nest_state = States.MOVE_TO_home
                    
            else:
                nest_state = None




        elif state == States.MOVE_TO_home:
            self.get_logger().info('MOVE_TO_HOME')
            pose = Twist()
            [pose.linear.x, pose.linear.y, pose.linear.z] = home_POSE[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = home_POSE[3:6]
            req = self.generate_robot_request(
                        cmd_mode=RobotCommand.Request.HOME,
                        # velocity=100
                # pose=pose
                )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.CHECK_POSE
            else:
                nest_state = None

        elif state == States.CHECK_POSE:
            self.get_logger().info('CHECK_POSE')
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.CHECK_JOINT)
            res = self.call_hiwin(req)
            print(res.current_position)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = None
            else:
                nest_state = None

        elif state == States.CLOSE_ROBOT:
            self.get_logger().info('CLOSE_ROBOT')
            req = self.generate_robot_request(cmd_mode=RobotCommand.Request.CLOSE)
            res = self.call_hiwin(req)
            nest_state = States.FINISH

        else:
            nest_state = None
            self.get_logger().error('Input state not supported!')
            # return
        return nest_state

    def _main_loop(self):
        state = States.INIT
        while state != States.FINISH:
            state = self._state_machine(state)
            if state == None:
                break
        self.destroy_node()

    def _wait_for_future_done(self, future: Future, timeout=-1):
        time_start = time.time()
        while not future.done():
            time.sleep(0.01)
            if timeout > 0 and time.time() - time_start > timeout:
                self.get_logger().error('Wait for service timeout!')
                return False
        return True
    
    def generate_robot_request(
            self, 
            holding=True,
            cmd_mode=RobotCommand.Request.PTP,
            cmd_type=RobotCommand.Request.POSE_CMD,
            velocity=DEFAULT_VELOCITY,
            acceleration=DEFAULT_ACCELERATION,
            tool=1,
            base=0,
            digital_input_pin=0,
            digital_output_pin=0,
            digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
            pose=Twist(),
            joints=[float('inf')]*6,
            circ_s=[],
            circ_end=[],
            jog_joint=6,
            jog_dir=0
            ):
        request = RobotCommand.Request()
        request.digital_input_pin = digital_input_pin
        request.digital_output_pin = digital_output_pin
        request.digital_output_cmd = digital_output_cmd
        request.acceleration = acceleration
        request.jog_joint = jog_joint
        request.velocity = velocity
        request.tool = tool
        request.base = base
        request.cmd_mode = cmd_mode
        request.cmd_type = cmd_type
        request.circ_end = circ_end
        request.jog_dir = jog_dir
        request.holding = holding
        request.joints = joints
        request.circ_s = circ_s
        request.pose = pose
        return request

    def call_hiwin(self, req):
        while not self.hiwin_client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info('service not available, waiting again...')
        future = self.hiwin_client.call_async(req)
        if self._wait_for_future_done(future):
            res = future.result()
        else:
            res = None
        return res

    # def call_yolo(self):
    #     class YoloResponse(NamedTuple):
    #         has_object: bool
    #         object_pose: list
    #     has_object = True if self.object_cnt < 5 else False
    #     object_pose = OBJECT_POSE
    #     res = YoloResponse(has_object,object_pose)
    #     # res.has_object = True if self.object_cnt < 5 else False
    #     # res.object_pose = OBJECT_POSE
    #     self.object_cnt += 1
    #     return res

    def start_main_loop_thread(self):
        self.main_loop_thread = Thread(target=self._main_loop)
        self.main_loop_thread.daemon = True
        self.main_loop_thread.start()

def main(args=None):
    rclpy.init(args=args)

    stratery = ExampleStrategy()
    stratery.start_main_loop_thread()

    rclpy.spin(stratery)
    rclpy.shutdown()

if __name__ == "__main__":
    main()
