#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 11

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

const int SW1 = 4;
const int SW2 = 5;
const int SW3 = 6;
const int SW4 = 7;
const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;

int ledState = LOW;
unsigned long previousMillis = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(SW4, INPUT);
}

void loop() {
  if(!digitalRead(SW1))
  {
    sensors.requestTemperatures();
    float tempC = sensors.getTempCByIndex(0);
    Serial.print("아누이노 우노 온도: ");
    Serial.println(tempC);
  }
  if(!digitalRead(SW2))
  {
    digitalWrite(LED1, HIGH);
    delay(1000);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(1000);
    digitalWrite(LED3, LOW);
  }
  if(!digitalRead(SW3))
  {
    int light = analogRead(A0);
    Serial.print("빛의 세기: ");
    Serial.println(light);
  }
  if(!digitalRead(SW4))
  {
    digitalWrite(LED3, HIGH);
    delay(1000);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);
    digitalWrite(LED1, HIGH);
    delay(1000);
    digitalWrite(LED1, LOW);
  }
}
