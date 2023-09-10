int Led = 13;	// LED on Arduino board 
int Shock = 3;
int val;

void setup()
{
	pinMode(Led, OUTPUT);	
	pinMode(Shock, INPUT);
}

void loop()
{
	val = digitalRead(Shock);
	if(val == HIGH)
	{
		digitalWrite(Led, LOW);
	}
	else
	{
		digitalWrite(Led, HIGH);
	}
}
