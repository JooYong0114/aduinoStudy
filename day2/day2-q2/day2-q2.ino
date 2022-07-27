const int LED1 = 5;
const int LED2 = 6;
const int LED3 = 7;
const int SW = 10;

int ledState = LOW;
unsigned long previousMillis = 0;
int i = 0;

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
    i++;
  }
  
  if(digitalRead(SW))
  {
    digitalWrite(LED1, (i%3==2));
    digitalWrite(LED2, (i%3==1));
    digitalWrite(LED3, (i%3==0));
  }
  else
  {
    digitalWrite(LED1, (i%3==0));
    digitalWrite(LED2, (i%3==1));
    digitalWrite(LED3, (i%3==2));
  }
}
