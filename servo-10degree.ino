
#include <Servo.h>

Servo servo;

void setup(){
  servo.attach(3);
}
void loop(){
  servo.write(10);
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(20); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(30); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(40); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(50); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(60); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(70); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(80); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(90);
  delay(300);
  delay(1000);
  servo.write(0); 
  delay(300);
  servo.write(100); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(120); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(130); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(140); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(150); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(160); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(170); 
  delay(300);
  servo.write(0); 
  delay(300);
  servo.write(180); 
  delay(300);
  delay(1000);
  servo.write(0); 
  delay(300);
  delay(1000);
}