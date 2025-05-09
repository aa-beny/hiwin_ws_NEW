#!/usr/bin/env python3
import time
import rclpy
from enum import Enum
from threading import Thread
from rclpy.node import Node
from rclpy.task import Future
from typing import NamedTuple
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from hiwin_interfaces.srv import RobotCommand


import time
# from YoloDetector import YoloDetectorActionClient

DEFAULT_VELOCITY = 100
DEFAULT_ACCELERATION = 100

VACUUM_PIN = 2
twoflag =0 

PHOTO_POSE = [0.00, 0.00, 0.00, 0.00, -90.00, 0.00]
home_POSE = [321.022, 187.294, 537.027, 180.00, 0.00, 90.00]


first_POSE = [367.883, 131.917, 407.882, 179.655,0.478, 73.070]


middlem_POSE = [323.306,219.571,390.230,  179.628, 0.560, 87.140]

middlem_POSE1 = [183.154,199.650,347.618,  -164.030, -28.452, 48.961]
middlem_POSE2 = [183.154,199.650,347.618,  -164.030, -28.452, 48.961]
middlem_POSE3 = [439.359,238.332,370.479,  179.689, 0.506, 87.101]
middlem_POSE4 = [533.322,236.019,309.767,  -172.671, -10.788, 51.451]


OBJECT_POSE = [ #判別完大中小放的位置
    [348.486,0.065,279.927,179.628, 0.560, 91.374],  [340.898,  247.718,233.554,  179.628, 0.560, 91.374],  [322.462, 115.278, 158.206, 179.628, 0.560, 91.374]
    ]

# OBJECT_SIZE_TOTAL = [ 9, 9, 7]  # 每個物件size總數
OBJECT_SIZE_CNT = [ 0, 0, 0]    # 每個物件size計數器
OBJECT_SIZE = [ 70, 55, 30]     # 每個物件size
OBJECT_MOVE_AXISY = [ 120, 100, 80]   # 每個物件size移到Y軸下一列位置

PICK_POSE = [  # 4個訂單的位置
    [144.741, 242.012, 151.449, -156.162, -27.866, 27.959],
    [271.415, 286.389, 159.285, -157.444, -26.307,33.246],
    [417.036, 278.393,  154.017,-157.434, -26.299,33.224],
    [551.626,278.398,154.764 ,-157.436, -26.299,33.227]
    ]

pick_POSE0 = [147.351, 249.746, 140.229, -156.162, -27.866, 27.959]
pick_POSE01 = [152.165, 263.999, 119.549,-156.162, -27.866, 27.959]

pick_POSE1 = [273.393, 294.560, 146.874,  -157.444, -26.307,33.246]
pick_POSE11 = [276.701, 308.228, 126.114,  -157.445, -26.307 ,33.246]

pick_POSE2 = [418.957, 286.328,  141.967,-157.434, -26.299,33.224]
pick_POSE21 = [422.321, 300.219,  120.875,-157.434, -26.299,33.224]

pick_POSE3 = [553.497, 286.147, 142.993,  -157.436, -26.299,33.227]
pick_POSE31 = [557.018, 300.689, 120.911,  -157.436, -26.299,33.227]

NUM_OBJECTS = 12# 物件總數
NUM_OBJECTS_CNT = 0   # 物件計數器 
NUM_OBJECTS_CNT_last =0   # 判斷最後是否要去中祭典                           
OBJECT_CRUUENT_SUBHIGH = 0 # 目前物件要減去的高度
OBJECT_CRUUENT_SIZE = 0 # 目前正在操作的物件大小




OBJECT_POSE_INDEX = [] # 要操作的物件size位置
# PICK_POSE_INDEX  = [ 0, 0, 0, 1, 1, 1, 2, 2, 2 ,3 ,3 ,3]

PICK_POSE_INDEX  = [ 2, 2, 2, 3, 3, 3, 1, 1, 1,0 ,0 ,0]
class States(Enum):
    INIT = 0
    FINISH = 1
    MOVE_TO_PHOTO_POSE = 2
    MOVE_TO_PLACE_POSE = 3
    CHECK_POSE = 4
    CLOSE_ROBOT = 5
    MOVE_TO_PLACE_POSE_TOP = 6
    MOVE_TO_home= 7
    MOVE_TO_PICK_POSE = 8
    MOVE_TO_PICK_POSE_TOP = 9
    MOVE_TO_PICK_POSE_TOP2 =10
    MOVE_TO_MIDDLE = 11
    MOVE_TO_MIDDLE2= 12
    MOVE_TO_first_POSE = 13


class ExampleStrategy(Node):

    def __init__(self):
        super().__init__('example_strategy')
        self.hiwin_client = self.create_client(RobotCommand, 'hiwinmodbus_service')
        self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.object_pose = None
        self.object_cnt = 0


    def _state_machine(self, state: States) -> States:
        global NUM_OBJECTS_INDEX
        global NUM_OBJECTS_CNT
        global NUM_OBJECTS_CNT_last
        global OBJECT_CRUUENT_SUBHIGH
        global OBJECT_POSE_INDEX
        global twoflag
        global OBJECT_POSE_INDEX_1

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
                # cmd_mode=RobotCommand.Request.HOME,
                # cmd_mode=RobotCommand.Request.PTP,
                cmd_type=RobotCommand.Request.JOINTS_CMD,
                joints=PHOTO_POSE,
                base=30
                )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_PICK_POSE_TOP
            else:
                nest_state = None
     

        
        elif state == States.MOVE_TO_PICK_POSE_TOP:



            self.get_logger().info('MOVE_TO_place_pose_top2')
            pose = Twist()

            twoflag =twoflag+1 
            NUM_OBJECTS_CNT_1 =NUM_OBJECTS_CNT-1
            if twoflag >=2 and OBJECT_POSE_INDEX[NUM_OBJECTS_CNT_1] != 3: # 3是錯誤的情況
                
                OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT_1]# 回到上方
                OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1 ]
                [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]
                if OBJECT_POSE_INDEX_1 ==0:
                    pose.linear.z = pose.linear.z +40   # size 大最高點  ＋ 往上調整
                if OBJECT_POSE_INDEX_1 ==1:
                    pose.linear.z = pose.linear.z +85   # size 中最高點  ＋ 往上調整
                if OBJECT_POSE_INDEX_1 ==2:
                    pose.linear.z = pose.linear.z +150   # size 小最高點  ＋ 往上調整
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    # velocity=130,
                    pose=pose
                )
                res = self.call_hiwin(req)
                if ( (OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] > 0) and ( (OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) == 0) ):# 那一列拿完了
                    OBJECT_POSE[ OBJECT_POSE_INDEX_1 ][0] += OBJECT_MOVE_AXISY[OBJECT_POSE_INDEX_1]# x軸移動到下一個高度

            

            self.get_logger().info('MOVE_TO_MIDDLE')
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 0:   #放完回去拿第一筆訂單的中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE1[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE1[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    pose=pose
                    )
                res = self.call_hiwin(req)

                
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 1:#放完回去拿第二筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE2[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE2[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    pose=pose
                    )
                res = self.call_hiwin(req)
                
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 2:#放完回去拿第三筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE3[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE3[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    pose=pose
                    )
                res = self.call_hiwin(req)
                
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 3:#放完回去拿第四筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE4[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE4[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    pose=pose
                    )
                res = self.call_hiwin(req)

            pose.linear.y += 10
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
                pose=pose
                )
            res = self.call_hiwin(req)




            self.get_logger().info('MOVE_TO_PICK_POSE_TOP')
            pose = Twist()
            PICK_POSE_1 = PICK_POSE[ PICK_POSE_INDEX[NUM_OBJECTS_CNT] ]
     
       
            [pose.linear.x, pose.linear.y, pose.linear.z] = PICK_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PICK_POSE_1[3:6]
            pose.linear.z += 30 #到物體的上方點
            pose.linear.y -= 20 #到物體的上方點

            
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                tool=1,
                pose=pose,
                holding=False,
                base=30
                )
            res = self.call_hiwin(req)
            
  
      

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
            
            downcount=1
            while True:
                
                if downcount == 4:
                    self.get_logger().info('doesnt exist')
                    OBJECT_POSE_INDEX.append(3)
                    break

                    
                # res = self.call_hiwin(req)
                req = self.generate_robot_request(
          
                    cmd_mode=RobotCommand.Request.PTP,  # 使用PTP（點對點）模式移動到指定姿勢
                    holding=True,
                    
                    # tool=1,
                    base=30,
                    pose=pose
                )  # 將設置好的Twist物件作為姿勢參數傳遞給生成的機器人請求
                # self.get_logger().info('down again')
                res = self.call_hiwin(req)
                # time.sleep(2)
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.READ_DI,
                    digital_input_pin=1,
                    # holding=False
                    holding=True
                )
                res = self.call_hiwin(req)
                for i in range(2):

                    self.get_logger().info('errortest')
                    if res.digital_state==True:
                        break
                    pose.linear.z -= 1.5
                    pose.linear.y += 1.2
                    req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,

                    pose=pose
                    )
                    res = self.call_hiwin(req)

                    req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.READ_DI,
                    digital_input_pin=1,
                    # holding=False
                    holding=True
                    )
                    res = self.call_hiwin(req)
                
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

            
                    downcount += 1
                    if PICK_POSE_INDEX[NUM_OBJECTS_CNT] ==0:
                        if downcount == 2:
                            self.get_logger().info('down again0')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE0[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE0[3:6]
          

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                                
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
            
                            

                        if downcount == 3:
                            self.get_logger().info('down again01')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE01[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE01[3:6]
          

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                          
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)

                    if PICK_POSE_INDEX[NUM_OBJECTS_CNT] ==1:
                        if downcount == 2:
                            self.get_logger().info('down again1')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE1[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE1[3:6]
      

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                               
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
                            

                        if downcount == 3:
                            self.get_logger().info('down again11')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE11[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE11[3:6]
               

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                             
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
                       
                    if PICK_POSE_INDEX[NUM_OBJECTS_CNT] ==2:
                        if downcount == 2:
                            self.get_logger().info('down again2')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE2[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE2[3:6]
                  

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                           
                            #    pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
                            

                        if downcount == 3:
                            self.get_logger().info('down again21')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE21[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE21[3:6]
                  

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                              
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
         
                    if PICK_POSE_INDEX[NUM_OBJECTS_CNT] ==3:
                        if downcount == 2:
                            self.get_logger().info('down again3')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE3[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE3[3:6]
                      

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
                               
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
                            

                        if downcount == 3:
                            self.get_logger().info('down again31')
                            [pose.linear.x, pose.linear.y, pose.linear.z] = pick_POSE31[0:3]
                            [pose.angular.x, pose.angular.y, pose.angular.z] = pick_POSE31[3:6]
                

                            
                            # req = self.generate_robot_request(
                            #     cmd_mode=RobotCommand.Request.PTP,
   
                            #     pose=pose,
                            #     base=30
                            #     )
                            # res = self.call_hiwin(req)
                  
                    # else:
                    #     self.get_logger().info('doesnt exist')
                    #     OBJECT_POSE_INDEX.append(0)
                    #     break
                        
           
          
           
                  
 
            
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.WAITING
            )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 3:# 如果不存在東西的話
                    NUM_OBJECTS_CNT += 1
                    if NUM_OBJECTS_CNT < NUM_OBJECTS:# 如果不存在東西再最後一個的話
                        nest_state = States.MOVE_TO_PICK_POSE_TOP
                    else:                   
                        nest_state = States.MOVE_TO_home
                else:
                    nest_state = States.MOVE_TO_PICK_POSE_TOP2
            else:
                nest_state = None

        elif state == States.MOVE_TO_PICK_POSE_TOP2:
            self.get_logger().info('MOVE_TO_PICK_POSE_TOP2')
            pose = Twist()
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 1 :# 中的話再多開一個吸盤
                self.get_logger().info('OpenOneSuck')
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :# 大的話再多開一個吸盤
                self.get_logger().info('OpentwoSuck')
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

       
            [pose.linear.x, pose.linear.y, pose.linear.z] = PICK_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PICK_POSE_1[3:6]
            pose.linear.z += 130 #到物體的上方點
            pose.linear.y -= 60 #到物體的上方點

            
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                holding=False,
                pose=pose,
                base=30
                )
            res = self.call_hiwin(req)


            self.get_logger().info('MOVE_TO_midle')

            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 0:   #第一筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE1[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE1[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    # velocity=150,
                    pose=pose
                    )
                res = self.call_hiwin(req)

                
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 1:#第二筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE2[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE2[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    # velocity=150,
                    pose=pose
                    )
                res = self.call_hiwin(req)
                
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 2:#第三筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE3[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE3[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    # velocity=150,
                    pose=pose
                    )
                res = self.call_hiwin(req)
                
            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] == 3:#第四筆訂單中際點
                [pose.linear.x, pose.linear.y, pose.linear.z] = middlem_POSE4[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = middlem_POSE4[3:6]
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    # velocity=150,
                    holding=False,
                    pose=pose
                    )
                res = self.call_hiwin(req)
          
            self.get_logger().info('MOVE_TO_place_pose_top1')
            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]  # 讀現在是大中小那一個
            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1]         # 去那個位置
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]
            # pose.linear.z = pose.linear.z +40   # size 大最高點  ＋ 往上調整

            if OBJECT_POSE_INDEX_1 ==0:
                pose.linear.z = pose.linear.z +40   # size 大最高點  ＋ 往上調整
            if OBJECT_POSE_INDEX_1 ==1:
                pose.linear.z = pose.linear.z +95   # size 中最高點  ＋ 往上調整
            if OBJECT_POSE_INDEX_1 ==2:
                pose.linear.z = pose.linear.z +130   # size 小最高點  ＋ 往上調整

            if  OBJECT_SIZE_CNT[0]>2  and OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :# 大的超過三個先到小的上
                pose.linear.y = pose.linear.y +30
            

            if PICK_POSE_INDEX[NUM_OBJECTS_CNT] <2  and OBJECT_SIZE_CNT[1]>2:# 中大於三個，三四筆訂單改
                self.get_logger().info('Z+20')
                pose.linear.z = pose.linear.z +35

      
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
                # velocity=150,
          
                pose=pose
                )
            res = self.call_hiwin(req)

            if  OBJECT_SIZE_CNT[0]>2  and OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :# 大的超過三個先到小的上方後再改回來
                pose.linear.y = pose.linear.y -30
                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
                # velocity=150,
          
                pose=pose
                )
            res = self.call_hiwin(req)

            self.get_logger().info('MOVE_TO_place_pose')

            OBJECT_CRUUENT_SIZE = OBJECT_SIZE[OBJECT_POSE_INDEX_1] # 讀大中小的size

            OBJECT_CRUUENT_SUBHIGH = (2-( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) )* OBJECT_CRUUENT_SIZE# 要下去多少高度
        


            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]
            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1 ]
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]
            OBJECT_CRUUENT_SIZE = OBJECT_SIZE[OBJECT_POSE_INDEX_1] # 讀大中小的size

            OBJECT_CRUUENT_SUBHIGH = (2-( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) )* OBJECT_CRUUENT_SIZE
            OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] += 1
            pose.linear.z = pose.linear.z - OBJECT_CRUUENT_SUBHIGH 


            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                # holding=False,
                # velocity=130,
                holding=True,
                pose=pose
            )
            res = self.call_hiwin(req)
            
            print(res)
            
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 2 :
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

                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                digital_output_pin=VACUUM_PIN,
                holding=True,
                pose=pose
                )
                res = self.call_hiwin(req)
            
                
                print("close1")
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :
                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                digital_output_pin=VACUUM_PIN,
                holding=True,
                pose=pose
                )
                res = self.call_hiwin(req)
                

                # time.sleep(1.0)
                print("close13")
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                    digital_output_pin=3,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)# 吸大的中間最後再關
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            if NUM_OBJECTS_CNT == 11:
                OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]  # 讀現在是大中小那一個
                OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1]         # 去那個位置
                [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]
            # pose.linear.z = pose.linear.z +40   # size 大最高點  ＋ 往上調整

                if OBJECT_POSE_INDEX_1 ==0:
                    pose.linear.z = pose.linear.z +40   # size 大最高點  ＋ 往上調整
                if OBJECT_POSE_INDEX_1 ==1:
                    pose.linear.z = pose.linear.z +95   # size 中最高點  ＋ 往上調整
                if OBJECT_POSE_INDEX_1 ==2:
                    pose.linear.z = pose.linear.z +130   # size 小最高點  ＋ 往上調整
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=True,
                    # velocity=130,
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
                # cmd_mode=RobotCommand.Request.HOME,
                # cmd_mode=RobotCommand.Request.PTP,
                cmd_type=RobotCommand.Request.JOINTS_CMD,
                joints=PHOTO_POSE,
                base=30
           
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

        # elif state == States.CLOSE_ROBOT:
        #     self.get_logger().info('CLOSE_ROBOT')
        #     req = self.generate_robot_request(cmd_mode=RobotCommand.Request.CLOSE)
        #     res = self.call_hiwin(req)
        #     nest_state = States.FINISH

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


        msg = String()
        msg.data = 'done'
        time.sleep(0.01)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
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
