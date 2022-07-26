void setup() 
{
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

int s = 1000;

void loop() 
{
  int val = analogRead(A0);
  Serial.println(val);
  if(val > 1000)
  {
    s = 100;
  }
  if(val < 100)
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
