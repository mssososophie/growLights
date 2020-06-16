#include <TimeLib.h>

#define LED1 2;
#define LED2 3;
#define LED3 4
#define LED4 5

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
  if (hour() >= 19 &&hour() < 22){
     digitalWrite(LED1, HIGH);
  }else {
    digitalWrite(LED1, LOW);
    }

  
  // put your main code here, to run repeatedly:
//  digitalWrite(LED1, HIGH);
//  delay(100);
//  digitalWrite(LED2, HIGH);
//  delay(100);
//  digitalWrite(LED3, HIGH);
//  delay(100);
//  digitalWrite(LED4, HIGH);
//  delay(100);
//  digitalWrite(LED1, LOW);
//  delay(100);
//  digitalWrite(LED2, LOW);
//  delay(100);
//  digitalWrite(LED3, LOW);
//  delay(100);
//  digitalWrite(LED4, LOW);
//  delay(100);
}
