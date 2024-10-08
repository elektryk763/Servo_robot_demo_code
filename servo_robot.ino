#include <Servo.h>

Servo servoBase;  
Servo servoFirstArm;  
Servo servoSecondArm;  
Servo servoGripper;  


int pos = 0;    // variable to store the servo position

void setup() 
{
  servoBase.attach(2); 
  servoFirstArm.attach(3); 
  servoSecondArm.attach(4); 
  servoGripper.attach(5); 
  
}

void loop() 
{
  for (pos = 40; pos <= 120; pos += 1) 
  { 
    servoBase.write(pos);
    delay(15);           
  }
  for (pos = 120; pos >= 40; pos -= 1) 
  { 
    servoBase.write(pos);              
    delay(15);                       
  }


  for (pos = 60; pos <= 120; pos += 1) 
  { 
    servoFirstArm.write(pos);
    delay(15);           
  }
  for (pos = 120; pos >= 60; pos -= 1) 
  { 
    servoFirstArm.write(pos);              
    delay(15);                       
  }


  for (pos = 70; pos <= 95; pos += 1) 
  { 
    servoSecondArm.write(pos);
    delay(15);           
  }
  for (pos = 95; pos >= 70; pos -= 1) 
  { 
    servoSecondArm.write(pos);              
    delay(15);                       
  }


  for (pos = 40; pos <= 90; pos += 1) 
  { 
    servoGripper.write(pos);
    delay(15);           
  }
  for (pos = 90; pos >= 40; pos -= 1) 
  { 
    servoGripper.write(pos);              
    delay(15);                       
  }
}
