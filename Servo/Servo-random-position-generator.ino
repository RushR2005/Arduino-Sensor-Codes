#include <Servo.h>

int pos=random(0,180);

Servo servo;

void setup(){
  servo.attach(9);
}
void loop(){
  servo.write(pos);
  delay(250);
  pos=random(0,180);
  delay(5000);
}
