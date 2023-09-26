/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PD2  //pin 2, CLK
  #define LEFT_ENC_PIN_B PD3  //pin 3, D
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PD4  //pin A4, CLK
  #define RIGHT_ENC_PIN_B PD5   //pin A5, D
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();


