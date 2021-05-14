// Ultrasonic Sensor HC-SR04 interfacing with Arduino.
// you can see the connections from this link - https://www.circuito.io/app?components=512,11021,13959

// defining the pins
const int trigPin = 3;
const int echoPin = 2;
// defining variables
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor in centimeteres
Serial.print("Distance: ");
Serial.print(distance);
Serial.println(" cm");
}
