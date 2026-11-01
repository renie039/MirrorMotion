#define ingressoAnalogico A0
#include <Servo.h>

Servo shoulder; //servo that move the base
int valoreAnalogico = 0; //potentiometer that control servo

void setup()
{
  Serial.begin(9600);
  shoulder.attach(2);
  shoulder.write(0);
}

void loop()
{
  valoreAnalogico = analogRead(ingressoAnalogico);
  shoulder.write(map(valoreAnalogico, 0, 1023, 0, 179));
  Serial.println(valoreAnalogico);
}