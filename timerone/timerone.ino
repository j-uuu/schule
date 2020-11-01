#include <TimerOne.h>

int led = 10;
int hilfe = 0;

void setup() {
  pinMode(led, OUTPUT);
  Timer1.initialize(100000);
  Timer1.attachInterrupt(blinken);
  Serial.begin(9600);
}

void blinken() {
  if(hilfe == 10)
    digitalWrite(led, HIGH);
  if(hilfe == 20){
    digitalWrite(led, LOW);
    hilfe = 0;
  }
  Serial.println("!");
  hilfe++;
}

void loop() {

}
