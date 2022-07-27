void setup() 
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, INPUT);
}

int s = 1000;

void loop() 
{
  if(digitalRead(10) == HIGH) 
  {
    s = 500;
  }
  else 
  {
    s = 1000;
  }
  digitalWrite(5, HIGH);
  delay(s);
  digitalWrite(6, HIGH);
  delay(s);
  digitalWrite(5, LOW);
  digitalWrite(7, HIGH);
  delay(s);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(s);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}
