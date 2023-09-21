/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD 6
  #define RIGHT_MOTOR_FORWARD 9
  #define LEFT_MOTOR_FORWARD 10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
  /* OUTPUT TO ESC by me */
  #define ESC_upper_limit 2000
  #define ESC_lower_limit 1000
  #define ESC_SpeedVal 500
  #define ESC_L_Pin 10
  #define ESC_R_Pin 9
#endif

int average_val   = (ESC_upper_limit + ESC_lower_limit)/2; //平均值


void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
