const int LED1 = 5;
const int LED2 = 6;
const int LED3 = 7;
const int SW = 10;

int ledState = LOW;
unsigned long previousMillis = 0;

void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(SW, INPUT);
}

void loop() 
{
  unsigned long currentMillis = millis();

  if(currentMillis - previousMillis >= 1000)
  {
    previousMillis = currentMillis;
    if(ledState == LOW) ledState = HIGH;
    else ledState = LOW;
    digitalWrite(LED1, ledState);
    digitalWrite(LED2, !ledState);
  }
  
  if(digitalRead(SW)) digitalWrite(LED3, HIGH);
  digitalWrite(LED3, LOW);
}
