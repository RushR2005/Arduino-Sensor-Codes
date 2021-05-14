const int Buzzer = 3;
void setup() {
  pinMode (Buzzer,OUTPUT);
}

void loop() {
  digitalWrite(Buzzer,HIGH);
  delay(500); //the Buzzer wouls buzz after half of a second
  digitalWrite(Buzzer,LOW);
  delay(500);
}
