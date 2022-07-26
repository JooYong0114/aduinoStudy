void setup() 
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(11, INPUT_PULLUP);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
}

void loop() 
{
  int val = analogRead(A0) / 100;
  int i = 1000;
  if(digitalRead(11) == HIGH)
  {
    i = 500;
  }
  else 
  {
    i = 1000;
  }
  delay(val);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(val);
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
  delay(val);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
}
