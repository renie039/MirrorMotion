#define inputBase A0 //potentiometer of the base
#define inputShoulder A1 //potentiometer of the shoulder
#define inputElbow A2 //potentiometer of the elbow
#define inputGripper A3 //potentiometer of the gripper
#include <Servo.h>

//name of the servomotors
Servo base; //servo that move the base
Servo shoulder; //servo that move shoulder
Servo elbow; //servo that move elbow
Servo gripper; //servo that move the gripper

//val of the potentiometer
int valBase = 0; //potentiometer that controll base
int valShoulder = 0; //potentiometer that controll shoulder
int valElbow = 0; //potentiometer that controll elbow
int valGripper = 0; //potentiometer that controll the gripper

void setup()
{
  base.attach(2); //port of the base
  shoulder.attach(3); //port of the shoulder
  elbow.attach(4); //port of the elbow
  gripper.attach(5); //port of the gripper
}

void loop()
{
  //base
  valBase = analogRead(inputBase);
  base.write(map(valBase, 0, 1023, 0, 179));
  
  //shoulder
  valShoulder = analogRead(inputShoulder);
  shoulder.write(map(valShoulder, 0, 1023, 0, 179));
  
  //elbow
  valElbow = analogRead(inputElbow);
  elbow.write(map(valElbow, 0, 1023, 0, 179));
  
  //gripper
  valGripper = analogRead(inputGripper);
  gripper.write(map(valGripper, 0, 1023, 0, 179));
}