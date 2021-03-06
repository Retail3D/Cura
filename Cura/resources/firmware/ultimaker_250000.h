#ifndef __CONFIGURATION_H
#define __CONFIGURATION_H
#define STRING_VERSION_CONFIG_H "Marlin-Mon, 11 Jun 2012 17:33:42 +0200 - b67dacdc8f1bd489e058e16d92ba29c364b2a8e5"
#define STRING_CONFIG_H_AUTHOR "Build-Me-Marlin"
#define BAUDRATE 250000
#define __ARDUINO_NR__ 4
#define EXTRUDERS 1
#define MINIMUM_PLANNER_SPEED 0.05
#define MOTHERBOARD 7
#define HEATER_0_USES_AD595
#define HEATER_0_MINTEMP 5
#define HEATER_0_MAXTEMP 275
#define BED_CHECK_INTERVAL 5000
#define TEMP_RESIDENCY_TIME 5
#define TEMP_HYSTERESIS 3
#define TEMP_WINDOW 1
#define TEMP_SENSOR_AD595_OFFSET 0.000000
#define TEMP_SENSOR_AD595_GAIN   1.000000
#define CooldownNoWait true
#define HEATING_EARLY_FINISH_DEG_OFFSET 1
#define PIDTEMP
#define PID_MAX 255
#define PID_INTEGRAL_DRIVE_MAX 255
#define K1 0.95
#define PID_dT 0.128
#define PID_PID
#define  DEFAULT_Kp 22.2
#define  DEFAULT_Ki 1.08
#define  DEFAULT_Kd 114
#define PID_ADD_EXTRUSION_RATE
#define  DEFAULT_Kc (1)
#define ENDSTOPPULLUPS
#define ENDSTOPPULLUP_XMAX
#define ENDSTOPPULLUP_YMAX
#define ENDSTOPPULLUP_ZMAX
#define ENDSTOPPULLUP_XMIN
#define ENDSTOPPULLUP_YMIN
#define ENDSTOPPULLUP_ZMIN
const bool X_ENDSTOPS_INVERTING = true;
const bool Y_ENDSTOPS_INVERTING = true;
const bool Z_ENDSTOPS_INVERTING = true;
#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0
#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false
#define DISABLE_E false
#define INVERT_X_DIR true
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define INVERT_E0_DIR false
#define INVERT_E1_DIR false
#define INVERT_E2_DIR false
#define X_HOME_DIR -1
#define Y_HOME_DIR -1
#define Z_HOME_DIR -1
#define min_software_endstops false
#define max_software_endstops false
#define X_MAX_LENGTH 205
#define Y_MAX_LENGTH 205
#define Z_MAX_LENGTH 200
#define X_HOME_POS 0
#define Y_HOME_POS 0
#define Z_HOME_POS 0
#define NUM_AXIS 4
#define HOMING_FEEDRATE {50*60, 50*60, 4*60, 0}
#define X_HOME_RETRACT_MM 5
#define Y_HOME_RETRACT_MM 5
#define Z_HOME_RETRACT_MM 1
#define QUICK_HOME
#define AXIS_RELATIVE_MODES {false, false, false, false}
#define MAX_STEP_FREQUENCY 40000
#define DEFAULT_AXIS_STEPS_PER_UNIT   {78.7402,78.7402,533.333333333,865.888}
#define DEFAULT_MAX_FEEDRATE          {250, 250, 5, 45}
#define DEFAULT_MAX_ACCELERATION      {9000,9000,100,10000}
#define DEFAULT_ACCELERATION          3000
#define DEFAULT_RETRACT_ACCELERATION  3000
#define DEFAULT_MINIMUMFEEDRATE       0.0
#define DEFAULT_MINTRAVELFEEDRATE     0.0
#define DEFAULT_MINSEGMENTTIME        20000
#define DEFAULT_XYJERK                20.0
#define DEFAULT_ZJERK                 0.4
#define DEFAULT_EJERK                 5.0
#define SLOWDOWN
#define DEFAULT_STEPPER_DEACTIVE_TIME 60
#define DEFAULT_STEPPER_DEACTIVE_COMMAND "M84 X Y E"
#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT
#define SDSUPPORT
#define SD_FINISHED_STEPPERRELEASE true
#define SD_FINISHED_RELEASECOMMAND "M84 X Y E"
#define ULTIPANEL
#define NEWPANEL
#define ULTIMAKERCONTROLLER
#define ULTRA_LCD
#define LCD_WIDTH 20
#define LCD_HEIGHT 4
#define PLA_PREHEAT_HOTEND_TEMP 180
#define PLA_PREHEAT_HPB_TEMP 70
#define PLA_PREHEAT_FAN_SPEED 255
#define ABS_PREHEAT_HOTEND_TEMP 240
#define ABS_PREHEAT_HPB_TEMP 100
#define ABS_PREHEAT_FAN_SPEED 255
#define MM_PER_ARC_SEGMENT 1
#define N_ARC_CORRECTION 25
#define PREVENT_DANGEROUS_EXTRUDE
#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MINTEMP 170
#define EXTRUDE_MAXLENGTH (X_MAX_LENGTH+Y_MAX_LENGTH)
const int dropsegments=5;
#define FAST_PWM_FAN
#define BLOCK_BUFFER_SIZE 16
#define MAX_CMD_SIZE 96
#define BUFSIZE 4
#include "thermistortables.h"
#endif //__CONFIGURATION_H
