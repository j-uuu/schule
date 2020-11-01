#include <TimerOne.h>

#define m_eins 8
#define m_zwei 9
#define m_drei 10
#define taster_eins 11
#define taster_zwei 12
#define taster_drei 13
#define taster_vier 1

int hilfe = 0;

void setup() {
  pinMode(m_eins, OUTPUT);
  pinMode(m_zwei, OUTPUT);
  pinMode(m_drei, OUTPUT);
  pinMode(taster_eins, INPUT);
  pinMode(taster_zwei, INPUT);
  pinMode(taster_drei, INPUT);
  pinMode(taster_vier, INPUT);
  Timer1.initialize(100000);
  Timer1.attachInterrupt(motor);
}

void motor(){
  switch (hilfe) {
    case 0:
      digitalWrite(m_eins, LOW);
      digitalWrite(m_zwei, LOW);
      digitalWrite(m_drei, LOW);
      break;
    case 1:
      digitalWrite(m_eins, HIGH);
      break;
    case 2:
      digitalWrite(m_zwei, HIGH);
      break;
    case 3:
      digitalWrite(m_drei, HIGH);
      break;
    }


}

void loop() {
  if(digitalRead(taster_vier) == 1)
    hilfe = 0;
  if(digitalRead(taster_eins) == 1 && hilfe == 0)
    hilfe++;
  if(digitalRead(taster_zwei) == 1 && hilfe == 1)
    hilfe = 2;
  if(digitalRead(taster_drei) == 1 && hilfe == 2)
    hilfe = 3;
  delay(5);
}
