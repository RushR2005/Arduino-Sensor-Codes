// using QMC5883L
// Output in the serial monitor will give the magnitude of magnetic field in x,y,z axis
// test is with a magnet and see the change in its values

#include <Wire.h>
#include <QMC5883L.h>

QMC5883L compass;

void setup() {
  Wire.begin();
  Serial.begin(9600);
  compass.init();
}

void loop() {
  int x, y, z;

  compass.read(&x, &y, &z);

  Serial.print("x: ");
  Serial.print(x);
  Serial.print("    y: ");
  Serial.print(y);
  Serial.print("    z: ");
  Serial.println(z);

  delay(250);
}


