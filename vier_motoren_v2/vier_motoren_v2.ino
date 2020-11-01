#include <TimerOne.h>

#define m_eins 8
#define m_zwei 9
#define m_drei 10
#define taster_eins 11
#define taster_zwei 12
#define taster_drei 13
#define taster_vier 1

int hilfe1 = 0;
int zaehler = 0;

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
  switch (hilfe1) {
    case 0:
      digitalWrite(m_eins, LOW);
      digitalWrite(m_zwei, LOW);
      digitalWrite(m_drei, LOW);
      break;
    case 1:
      digitalWrite(m_eins, HIGH);
      zaehler++;
      break;
    case 2:
      digitalWrite(m_zwei, HIGH);
      zaehler++;
      break;
    case 3:
      digitalWrite(m_drei, HIGH);
      zaehler++;
      break;
    }
}

void loop() {
  if(digitalRead(taster_zwei) == 1)
    hilfe1 = 0;
  if(digitalRead(taster_eins) == 1 && hilfe1 == 0){
    hilfe1 = 1;
    zaehler = 0;
  }
  if(zaehler == 20 && hilfe1 == 1)
    hilfe1 = 2;
  if(zaehler == 40 && hilfe1 == 2){
    hilfe1 = 3;
  }



  delay(5);
}
