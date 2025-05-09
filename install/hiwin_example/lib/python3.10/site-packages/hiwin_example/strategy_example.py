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


  ####### 界面===================================================================
from PyQt5 import QtWidgets, QtGui, QtCore
from Hiwinphoto2 import Ui_MainWindow
import time
from PyQt5.QtCore import QTimer

import sys
import threading

# flag1 = 0

class MainWindow(QtWidgets.QMainWindow):
    def __init__(self):
        # in python3, super(Class, self).xxx = super().xxx
      
        super(MainWindow, self).__init__()
        self.ui = Ui_MainWindow()
        self.ui.setupUi(self)
        self.setup_control()

    def setup_control(self):
        # TODO
        self.ui.Order.setColumnCount(2)
        self.ui.Order.setRowCount(0)
        self.ui.Order.setHorizontalHeaderLabels(('size','place'))
   
        # self.ui.Order.setItem(0,0, QtWidgets.QTableWidgetItem('PHo'))
        
        self.ui.SelectSize.addItem("s")

        self.clicked_counter = 0
        self.timer=QTimer()
        self.timer.start(1) # start Timer, here we set '1ms' while timeout one time
        self.time_counter = 0  # init time counter # for testing: 3599000
        self.timer.timeout.connect(self.showtime) # when timeout, do run one
        # self.flag1 =0
        self.ui.New.clicked.connect(self.buttonNew)
        self.ui.Insert.clicked.connect(self.buttonInsert)
        self.ui.Delete.clicked.connect(self.buttonDelete)
        self.ui.Start.clicked.connect(self.buttonStart) #點擊start按鍵會跳到buttonStart函式
        self.ui.Stop.clicked.connect(self.buttonStop) #點擊stop按鍵會跳到buttonStop函式
        self.ui.Reset.clicked.connect(self.buttonReset)
        self.ui.Exit.clicked.connect(self.buttonExit)
        self.ui.Large_1.clicked.connect(self.setup_Large_1)  #點擊Large_1按鈕會跳到setup_Large_1函式
        self.ui.Large_2.clicked.connect(self.setup_Large_2)
        self.ui.Large_3.clicked.connect(self.setup_Large_3)
        self.ui.Large_4.clicked.connect(self.setup_Large_4)
        self.ui.Medium_1.clicked.connect(self.setup_Medium_1)  #點擊Medium_1按鈕會跳到setup_Medium_1函式
        self.ui.Medium_2.clicked.connect(self.setup_Medium_2)
        self.ui.Medium_3.clicked.connect(self.setup_Medium_3)
        self.ui.Medium_4.clicked.connect(self.setup_Medium_4)
        self.ui.Small_1.clicked.connect(self.setup_Small_1)  #點擊Small_1按鈕會跳到setup_Small_1函式
        self.ui.Small_2.clicked.connect(self.setup_Small_2)
        self.ui.Small_3.clicked.connect(self.setup_Small_3)
        self.ui.Small_4.clicked.connect(self.setup_Small_4)

        # self.ui.Reset.clicked.s
    def buttonNew(self): #新增功能(函式)
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
        size = self.ui.SelectSize.currentText() #把size欄中的大小存到對應的訂單
        Place = self.ui.SelectPlace.currentText() #把place欄中要放的位置存到對應訂單
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem(size))  #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem(Place)) #第1列顯示放置位置
        
    def buttonInsert(self): #插入功能
        rowSelect =self.ui.Order.currentRow() #選擇要插入的行
        self.ui.Order.insertRow(rowSelect)   #再選擇的行之後新增一行 
        self.ui.Order.selectRow(rowSelect)   #反白新增的那行
        
        size = self.ui.SelectSize.currentText()  #把size欄中的大小存到對應的訂單
        Place = self.ui.SelectPlace.currentText() #把place欄中要放的位置存到對應訂單
         
        self.ui.Order.setItem(rowSelect,0, QtWidgets.QTableWidgetItem(size)) #第0列顯示size
        self.ui.Order.setItem(rowSelect,1, QtWidgets.QTableWidgetItem(Place)) #第1列顯示放置位置
     

    def buttonDelete(self):
        rowSelect =self.ui.Order.currentRow() #選擇要刪除的行
        self.ui.Order.removeRow(rowSelect)  #刪除所選的那行，並將以下的行往上移動
        
        rowTotal = self.ui.Order.rowCount() #獲取當前行的總數，並將總數儲存於rowTotal
        
        if ( rowTotal > rowSelect):  #選擇行數存在時選該行，否則選最後一行
            self.ui.Order.selectRow(rowSelect)
        else:
            if ( rowTotal > 0):
                self.ui.Order.selectRow(rowTotal - 1) 
        
            
    def buttonStart(self): #啟動時旗標=1
        # self.flag1 = 1
        # global flag1
        global OBJECT_POSE_INDEX
        global PLACE_POSE_INDEX
        global OBJECT_SIZE_TOTAL
                
        # flag1 = 0
        OBJECT_POSE_INDEX = []
        OBJECT_SIZE_TOTAL = [0,0,0]

        for row in range( self.ui.Order.rowCount()):
            size = self.ui.Order.item(row,0).text()
            Place = self.ui.Order.item(row,1).text()

            match size:
                case "Large":
                    OBJECT_POSE_INDEX.append(0)
                    OBJECT_SIZE_TOTAL[0]+=1
                case "Medium":
                    OBJECT_POSE_INDEX.append(1)
                    OBJECT_SIZE_TOTAL[1]+=1
                case "Small":
                    OBJECT_POSE_INDEX.append(2)
                    OBJECT_SIZE_TOTAL[2]+=1

            match Place:
                case "PlaceA":
                    PLACE_POSE_INDEX.append(0)
                case "PlaceB":
                    PLACE_POSE_INDEX.append(1)
                case "PlaceC":
                    PLACE_POSE_INDEX.append(2)
                case "PlaceD":
                    PLACE_POSE_INDEX.append(3)


            print('size:' + size)
            print('Place:' + Place)

        print(OBJECT_POSE_INDEX)
        print(PLACE_POSE_INDEX)
        print(OBJECT_SIZE_TOTAL)

        
        
        stratery = ExampleStrategy()
        stratery.start_main_loop_thread()
        rclpy.spin(stratery)
        rclpy.shutdown()

    def buttonStop(self):  #停止旗標=0
        # self.flag1 = 0
        # global flag1
        # flag1 = 0        
        pass
        
    def buttonReset(self):  #重置停止計時且旗標=0
        self.time_counter = 0
        # self.flag1 = 0
        # global flag1
        # flag1 = 0        

    def buttonExit(self):
        sys.exit(app.exec_())
        
    def showtime(self):
        # self.ui.Time_output.display(str(self.set_time_counter_format(self.time_counter)))
        self.ui.label_TIME.setText(str(self.set_time_counter_format(self.time_counter))) # show 
        # if self.flag1 == 1:
        #     self.time_counter += 1
    def set_time_counter_format(self, time_counter):
        ms = time_counter % 1000
        total_sec = max(0, (time_counter - ms)//1000)
        hour = max(0, total_sec//3600)
        minute = max(0, total_sec//60 - hour * 60)
        sec = max(0, (total_sec - (hour * 3600) - (minute * 60)))
        return f"{hour}:{minute:0>2}:{sec:0>2}.{ms:0>3}"
   
    ####### 快捷鍵===================================================================
    def setup_Large_1(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Large")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceA")) #第1列顯示放置位置

    def setup_Large_2(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Large")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceB")) #第1列顯示放置位置

    def setup_Large_3(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Large")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceC")) #第1列顯示放置位置

    def setup_Large_4(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Large")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceD")) #第1列顯示放置位置



    def setup_Medium_1(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Medium")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceA")) #第1列顯示放置位置

    def setup_Medium_2(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Medium")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceB")) #第1列顯示放置位置

    def setup_Medium_3(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Medium")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceC")) #第1列顯示放置位置

    def setup_Medium_4(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Medium")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceD")) #第1列顯示放置位置

    def setup_Small_1(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Small")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceA")) #第1列顯示放置位置

    def setup_Small_2(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Small")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceB")) #第1列顯示放置位置

    def setup_Small_3(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Small")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceC")) #第1列顯示放置位置

    def setup_Small_4(self):
        rowCount =self.ui.Order.rowCount() 
        self.ui.Order.insertRow(rowCount) #再選擇的行之後新增一行
        self.ui.Order.selectRow(rowCount) #反白新增的那行
      
         
        self.ui.Order.setItem(rowCount,0, QtWidgets.QTableWidgetItem("Small")) #第0列顯示size
        self.ui.Order.setItem(rowCount,1, QtWidgets.QTableWidgetItem("PlaceD")) #第1列顯示放置位置
# if __name__ == '__main__':
#     import sys
#     app = QtWidgets.QApplication(sys.argv)
#     window = MainWindow()
#     window.show()
#     sys.exit(app.exec_())
    
     
  ####### 界面===================================================================







# from YoloDetector import YoloDetectorActionClient

DEFAULT_VELOCITY = 100
DEFAULT_ACCELERATION = 100

VACUUM_PIN = 2

PHOTO_POSE = [0.00, 0.00, 0.00, 0.00, -90.00, 0.00]
home_POSE = [321.022, 187.294, 537.027, 180.00, 0.00, 90.00]
# OBJECT_POSE = [20.00, 0.00, 0.00, 0.00, -90.00, 0.00]

# OBJECT_XX = [ big(0), midium(1）, small(2)]

OBJECT_POSE = [ # 物件為製作標
    [324.584,-0.900, 277.046, 179.647, 0.324, 88.786],   [325.029, 250.748, 232.663, 179.647,0.324,88.786],[320.522, 116.509, 155.447, 179.647, 0.324,88.786]
    ]
OBJECT_pass_POSE = [ # z += 20                              z +87                                               z +129 
    [324.582,-1.439, 315.238, 179.655, 0.478, 87.470],   [327.087, 249.412, 320.315, 179.655, 0.479,87.477],[322.304, 118.304, 285.474, 179.655, 0.479,87.477]
    ]
OBJECT_SIZE_TOTAL = [ 7, 4, 7]  # 每個物件size總數
OBJECT_SIZE_CNT = [ 0, 0, 0]    # 每個物件size計數器
OBJECT_SIZE = [ 70, 55, 30]     # 每個物件size
OBJECT_MOVE_AXISY = [ 120, 100, 80]   # 每個物件size移到Y軸下一列位置

PLACE_POSE = [  # 目的位置座標
    [41.181, 5.265, 66.965, 179.657, 0.426, 86.912],
    [41.181,220.788, 67.250, 179.657, 0.426, 86.912],
    [163.019,220.788, 67.433, 179.657, 0.426, 86.912],
    [163.019,5.963, 65.988, 179.657, 0.426, 86.912]
    ]




# only for example as we don't use yolo here

# assume NUM_OBJECTS=5, then this process will loop 5 times
NUM_OBJECTS = 12 # 物件總數
NUM_OBJECTS_CNT = 0   # 物件計數器                                  
OBJECT_CRUUENT_SUBHIGH = 0 # 目前物件要減去的高度
OBJECT_CRUUENT_SIZE = 0 # 目前正在操作的物件大小

errorcnt =0
twoflag =0 

OBJECT_POSE_INDEX = [] # 要操作的物件size位置
PLACE_POSE_INDEX =  []


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
    MOVE_TO_PLACE_POSE_TOP = 9
    MOVE_TO_home= 10
    MOVE_TO_PLACE_POSE_TOP2= 11


 
class ExampleStrategy(Node):

    def __init__(self):
        super().__init__('example_strategy')
        self.hiwin_client = self.create_client(RobotCommand, 'hiwinmodbus_service')
        self.subscription = self.create_subscription(
            String,
            'topic',
            self.listener_callback,
            10)
        
        self.object_pose = None
        self.object_cnt = 0
        self.flag_start=0
    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.data)
        if msg.data=='done':
            self.flag_start=1

    def _state_machine(self, state: States) -> States:
        global NUM_OBJECTS_INDEX
        global NUM_OBJECTS_CNT
        global OBJECT_CRUUENT_SUBHIGH
        global twoflag
        global errorcnt
        # global flag1
        if state == States.INIT:
            self.get_logger().info('INIT')
            # global flag1
            if ( self.flag_start == 0):
                return States.INIT         
            nest_state = States.MOVE_TO_OPJECT_TOP

        elif state == States.MOVE_TO_PHOTO_POSE:
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
           
                # pose=pose
                )
            # req = self.generate_robot_request(
            #     cmd_type=RobotCommand.Request.JOINTS_CMD,
            #     joints=PHOTO_POSE
            #     )
            res = self.call_hiwin(req)
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.MOVE_TO_OPJECT_TOP
            else:
                nest_state = None




        elif state == States.MOVE_TO_OPJECT_TOP:
            
            
            pose = Twist()
            # if  PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ==3 and OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:# 如果是第四比訂單,又去拿小的
            #     self.get_logger().info('place big')
            #     pose.linear.x += 40 # y 往前一點
            #     req = self.generate_robot_request(
            #     cmd_mode=RobotCommand.Request.PTP,
            #     base=30,
            #     holding=False,
            
            #     pose=pose
            #     )
            #     res = self.call_hiwin(req)
            
            twoflag +=1 
            if twoflag >=2: 
                self.get_logger().info('MOVE_TO_PLACE_POSE_TOP2')#如果吸盤在放的位置結束,往上台20
                NUM_OBJECTS_CNT_1 =NUM_OBJECTS_CNT-1

                PLACE_POSE_1 = PLACE_POSE[ PLACE_POSE_INDEX[NUM_OBJECTS_CNT_1] ]
                [pose.linear.x, pose.linear.y, pose.linear.z] = PLACE_POSE_1[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = PLACE_POSE_1[3:6]
                if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT_1] ==1:# 讓中的對齊
                    pose.linear.y += 15

                if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT_1] ==2:# 讓小的對齊
                    pose.linear.y += 30
                pose.linear.z += 20 # ÷place 最低點 ＋ 往上調整
                req = self.generate_robot_request(#去要放的物體
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                    # velocity=130,
                    pose=pose
                    )
                res = self.call_hiwin(req)
                    
                
    
         

            
            
            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]  # 讀現在是大中小那一個

            OBJECT_pass_POSE1 =OBJECT_pass_POSE[ OBJECT_POSE_INDEX_1] # 大中小中繼點

            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1]         # 去那個位置

           

            if  OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1 and PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ==3:# 第四比訂單如果去拿中 先到小的中繼點
                self.get_logger().info('special')
                OBJECT_pass_POSE2 =OBJECT_pass_POSE[2]
                [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_pass_POSE2[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_pass_POSE2[3:6]
                pose.linear.x = pose.linear.x +10 
                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
          
                pose=pose
                )
                res = self.call_hiwin(req)

            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_pass_POSE1[0:3]   # 到中繼點
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_pass_POSE1[3:6]
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                velocity=DEFAULT_VELOCITY, 
                base=30,
                holding=False,
          
                pose=pose
                )
            res = self.call_hiwin(req)

       

          
            
            
            OBJECT_CRUUENT_SIZE = OBJECT_SIZE[OBJECT_POSE_INDEX_1] # 讀大中小的size

            OBJECT_CRUUENT_SUBHIGH = ( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) * OBJECT_CRUUENT_SIZE# 要下去多少高度
            self.get_logger().info(' OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1]=%d' % OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1])
            self.get_logger().info(' OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1]=%d' % OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1])
            self.get_logger().info(' (( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1] - 1) / 3)=%d' % (( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1] - 1) / 3))
            # self.get_logger().info(' OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1]=%d' % OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1]/3)
            print( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] / 3)
            if (int(OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1])==0 or OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1]==3 or OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1]==6):#判斷第一列是否就是size最後一堆
                if ( (( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1] - 1) / 3) == (( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1]+1) / 3) ): #判斷是否是size最後一堆
                    OBJECT_CRUUENT_SUBHIGH = ( 3- ( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1]  - OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] ) ) * OBJECT_CRUUENT_SIZE# 要下去多少高度
                    self.get_logger().info('bad')
                if ( (( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1] - 1) / 3) == ( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] / 3) ): #判斷是否是size最後一堆
                    OBJECT_CRUUENT_SUBHIGH = ( 3- ( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1]  - OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] ) ) * OBJECT_CRUUENT_SIZE# 要下去多少高度
                    self.get_logger().info('bad3')
                else:
                    self.get_logger().info('good')
            else:#判斷後面幾列是否就是size最後一堆
                if ( (( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1] - 1) / 3) == ( OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] / 3) ): #判斷是否是size最後一堆
                    OBJECT_CRUUENT_SUBHIGH = ( 3- ( OBJECT_SIZE_TOTAL[OBJECT_POSE_INDEX_1]  - OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] ) ) * OBJECT_CRUUENT_SIZE# 要下去多少高度
                    self.get_logger().info('bad2')
                else:
                    self.get_logger().info('good2')

            OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] += 1
            self.get_logger().info('MOVE_TO_OPJECT_TOP')

            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]   # 到物體上方點
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]
            pose.linear.z = pose.linear.z - OBJECT_CRUUENT_SUBHIGH+20 
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
          
                pose=pose
                )
            res = self.call_hiwin(req)

            
            
            req = self.generate_robot_request(# 開一個吸盤
                cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                digital_output_pin=VACUUM_PIN,
                holding=True,
                pose=pose
            )
            res = self.call_hiwin(req)

        

            self.get_logger().info('MOVE_TO_pick_OPJECT')
            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] # 到物體點
            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1 ]
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]

            pose.linear.z = pose.linear.z - OBJECT_CRUUENT_SUBHIGH

            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=True,
                # holding=False,
          
                pose=pose
            )
            res = self.call_hiwin(req)
            
            print(res)
            
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 1 :# 中的話再多開一個吸盤
            
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :# 大的話再多開一個吸盤
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

            errorcnt =0
            # # while(res.digital_state!=True):#沒吸到的情況
            while True:#沒吸到的情況
                # req = self.generate_robot_request(
                # cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                # digital_output_cmd=RobotCommand.Request.DIGITAL_ON,
                # digital_output_pin=VACUUM_PIN,
                # holding=True,
                # pose=pose
                # )
                # res = self.call_hiwin(req)
                req = self.generate_robot_request(
                        cmd_mode=RobotCommand.Request.READ_DI,
                        digital_input_pin=1,
                        holding=True
                    )
                res = self.call_hiwin(req)
                if res.digital_state==True:
                    break
                if errorcnt ==5:
                    break
                else:
                    req = self.generate_robot_request(
                        cmd_mode=RobotCommand.Request.PTP,
                        base=30,
                        holding=True,
                        pose=pose
                    )
                    pose.linear.z -= 1
                    pose.linear.y += 1
                    errorcnt+= 1
                    res = self.call_hiwin(req)

                    
                    
                    continue
            if res.arm_state == RobotCommand.Response.IDLE:
                nest_state = States.PICK_OBJECT
            else:
                nest_state = None

        elif state == States.PICK_OBJECT:
            self.get_logger().info('PICK_OBJECT_top2')# 吸盤吸到東西後往上抬
            pose = Twist()
            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]
            OBJECT_POSE_1 = OBJECT_POSE[ OBJECT_POSE_INDEX_1 ]
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_POSE_1[3:6]

            pose.linear.z = pose.linear.z - OBJECT_CRUUENT_SUBHIGH + 30

            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
                # holding=False,
          
                pose=pose
            )
            res = self.call_hiwin(req)

            req = self.generate_robot_request(#在讀一次DI
                        cmd_mode=RobotCommand.Request.READ_DI,
                        digital_input_pin=1,
                        holding=False
                    )
            res = self.call_hiwin(req)
            if res.digital_state==False:#如果沒吸到東西
                pose.linear.z -= 31#再往下
                pose.linear.y += 1.0
                req = self.generate_robot_request(
                        cmd_mode=RobotCommand.Request.PTP,
                        base=30,
                        holding=True,
                        pose=pose
                    )
                res = self.call_hiwin(req)
      

                pose.linear.z += 30#再上來
                req = self.generate_robot_request(
                        cmd_mode=RobotCommand.Request.PTP,
                        base=30,
                        holding=False,
                        pose=pose
                    )
                    
                res = self.call_hiwin(req)


            errorcnt ==0
            

            if ( (OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] > 0) and ( (OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] % 3) == 0) ):# 那一列拿完了
                OBJECT_POSE[ OBJECT_POSE_INDEX_1 ][0] += OBJECT_MOVE_AXISY[OBJECT_POSE_INDEX_1]# x軸移動到下一個高度



            OBJECT_POSE_INDEX_1 = OBJECT_POSE_INDEX[NUM_OBJECTS_CNT]  # 讀現在是大中小那一個

            OBJECT_pass_POSE1 =OBJECT_pass_POSE[ OBJECT_POSE_INDEX_1] # 大中小中繼點

            # if  OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] < 3  and PLACE_POSE_INDEX[NUM_OBJECTS_CNT] <2:#如果還在第一列，訂單再前兩筆時，不要回中際點
            #     print("no_mid")
          
  

            # else:
            self.get_logger().info('move_to_mid')
            [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_pass_POSE1[0:3]   # 到中繼點
            [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_pass_POSE1[3:6]
            if  OBJECT_SIZE_CNT[ OBJECT_POSE_INDEX_1] == 1:
                pose.linear.z = pose.linear.z +15
                
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
        
                pose=pose
                )
            res = self.call_hiwin(req)
            if  OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1 and PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ==3:# 第四比訂單如果去拿中 中的中繼點完再到小的中繼點
                self.get_logger().info('mid place4 special')

                
                OBJECT_pass_POSE2 =OBJECT_pass_POSE[2]
                [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_pass_POSE2[0:3]
                [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_pass_POSE2[3:6]
                pose.linear.x = pose.linear.x +10 
                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
          
                pose=pose
                )
                res = self.call_hiwin(req)

                pose.linear.y -= 60 #學小的
                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
            
                pose=pose
                )
                res = self.call_hiwin(req)


            if  OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==0:#如果拿大的
                self.get_logger().info('take over big')
                [pose.linear.x, pose.linear.y, pose.linear.z] = OBJECT_pass_POSE1[0:3]   # 到中繼點前方
                [pose.angular.x, pose.angular.y, pose.angular.z] = OBJECT_pass_POSE1[3:6]
                pose.linear.x -= 50
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.PTP,
                    base=30,
                    holding=False,
                
                    pose=pose
                    )
                res = self.call_hiwin(req)

            if  PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ==3 and OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:# 如果是第四比訂單,又去拿小的
                self.get_logger().info('place big')
                pose.linear.y -= 60 # y 往前一點
                req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
            
                pose=pose
                )
                res = self.call_hiwin(req)

     
            self.get_logger().info('MOVE_TO_PLACE_POSE_TOP')   #去要放的物體＋20
            pose = Twist()
            PLACE_POSE_1 = PLACE_POSE[ PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ]
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==0:# 直接動z軸
                PLACE_POSE_1[2] += OBJECT_SIZE[0]
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1:
                PLACE_POSE_1[2] += OBJECT_SIZE[1]

     
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:
                PLACE_POSE_1[2] += OBJECT_SIZE[2]
       
            [pose.linear.x, pose.linear.y, pose.linear.z] = PLACE_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PLACE_POSE_1[3:6]
            pose.linear.z += 20 # ÷place 最低點 ＋ 往上調整
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1:# 讓中的對齊
                pose.linear.y += 15

            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:# 讓小的對齊
                pose.linear.y += 30
   
            req = self.generate_robot_request(
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=False,
      
                pose=pose
                )
            res = self.call_hiwin(req)





            self.get_logger().info('MOVE_TO_PLACE_POSE')  #去要放的物體


            

            pose = Twist()
            PLACE_POSE_1 = PLACE_POSE[ PLACE_POSE_INDEX[NUM_OBJECTS_CNT] ]
            [pose.linear.x, pose.linear.y, pose.linear.z] = PLACE_POSE_1[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = PLACE_POSE_1[3:6]
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==1:# 讓中的對齊
                pose.linear.y += 15

            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] ==2:# 讓小的對齊
                pose.linear.y += 30

            req = self.generate_robot_request(#去要放的物體
                cmd_mode=RobotCommand.Request.PTP,
                base=30,
                holding=True,
                # velocity=130,
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
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 1 :# 中的話再多關一個吸盤
            
                req = self.generate_robot_request(
                    cmd_mode=RobotCommand.Request.DIGITAL_OUTPUT,
                    digital_output_cmd=RobotCommand.Request.DIGITAL_OFF,
                    digital_output_pin=1,
                    holding=True,
                    pose=pose
                )
                res = self.call_hiwin(req)
            if OBJECT_POSE_INDEX[NUM_OBJECTS_CNT] == 0 :# 大的話再多關兩個吸盤
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
                res = self.call_hiwin(req)
 
            
            if res.arm_state == RobotCommand.Response.IDLE:
                NUM_OBJECTS_CNT += 1
                if NUM_OBJECTS_CNT < NUM_OBJECTS:
                    nest_state = States.MOVE_TO_OPJECT_TOP
                else:
                    
                    nest_state = States.MOVE_TO_home
                    
            else:
                nest_state = None
     
       

        elif state == States.MOVE_TO_home:
            self.get_logger().info('MOVE_TO_PHOTO_POSE')
            pose = Twist()
            [pose.linear.x, pose.linear.y, pose.linear.z] = home_POSE[0:3]
            [pose.angular.x, pose.angular.y, pose.angular.z] = home_POSE[3:6]
            req = self.generate_robot_request(
                cmd_type=RobotCommand.Request.JOINTS_CMD,
                joints=PHOTO_POSE,
                base=30
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
                nest_state = States.CLOSE_ROBOT
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

    # stratery = ExampleStrategy()
    # stratery.start_main_loop_thread()
    # rate = stratery.create_rate(1000)
    # rclpy.spin_once(stratery)

    #import sys
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    
    app.exec()
    
    # rclpy.spin(stratery)
    # rclpy.shutdown()
   

    sys.exit()




if __name__ == "__main__":
    main()



    


