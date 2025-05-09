from PyQt5 import QtWidgets, QtGui, QtCore
from Hiwinphoto2 import Ui_MainWindow
import time
from PyQt5.QtCore import QTimer
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
        self.flag1 =0
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
        self.flag1 = 1
        
    def buttonStop(self):  #停止旗標=0
        self.flag1 = 0
        
    def buttonReset(self):  #重置停止計時且旗標=0
        self.time_counter = 0
        self.flag1 = 0

    def buttonExit(self):
        sys.exit(app.exec_())
        
    def showtime(self):
        # self.ui.Time_output.display(str(self.set_time_counter_format(self.time_counter)))
        self.ui.label_TIME.setText(str(self.set_time_counter_format(self.time_counter))) # show 
        if self.flag1 == 1:
            self.time_counter += 1
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
     

    

        
            
if __name__ == '__main__':
    import sys
    app = QtWidgets.QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
