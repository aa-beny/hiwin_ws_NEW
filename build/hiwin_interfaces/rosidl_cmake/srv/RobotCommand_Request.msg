# request

# mode
uint8 EXCITE=1
uint8 PTP=2
uint8 LINE=3
uint8 CIRC=4
uint8 DIGITAL_OUTPUT=5
uint8 HOME=6
uint8 JOG=7
uint8 CHECK_JOINT=8
uint8 CHECK_POSE=9
uint8 CLOSE=10
uint8 WAITING=11
uint8 READ_DI=12
uint8 SET_BASE=13
uint8 SET_TOOL=14
uint8 MOTION_STOP=15


# cmd type
uint8 JOINTS_CMD=0
uint8 POSE_CMD=1

# digital_output_cmd
uint8 DIGITAL_ON=1
uint8 DIGITAL_OFF=0
uint8 do_timer

bool holding
uint8 cmd_mode
uint8 cmd_type
uint8 velocity
uint8 acceleration
uint8 tool
uint8 base
uint8 base_num
uint8 tool_num

uint8 digital_input_pin
uint8 digital_output_pin
uint8 digital_output_cmd

# for POSE_CMD
geometry_msgs/Twist pose

# for JOINTS_CMD
float64[6] joints
float64[] circ_s
float64[] circ_end

# for JOG mode
int8 jog_joint
int8 jog_dir

