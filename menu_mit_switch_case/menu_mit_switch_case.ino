#include <LiquidCrystal.h>

#define rs 2
#define e 3
#define d4 4
#define d5 5
#define d6 6
#define d7 7
#define spalten 16
#define zeilen 2
#define taster_s1 11
#define taster_s2 12
#define led 10

LiquidCrystal lcd(rs,e,d4,d5,d6,d7);

int menu = 0;
int funktion = 0;
int s1 = 0;
int alt_s1 = 1;
int s2 = 0;
int alt_s2 = 1;
int hilfe = 0;

void setup(){
  Serial.begin(9600);
  lcd.begin(spalten,zeilen);
  pinMode(led, OUTPUT);
  lcd.clear();
}

void loop(){
  s1 = digitalRead(taster_s1);
  s2 = digitalRead(taster_s2);

  if(s1 != alt_s1 || s2 != alt_s2){
    switch (menu) {
      case 0:
        lcd.print("Hallo");
        if(s1 == HIGH)
          menu = 1;
        break;

      case 1:
        lcd.clear();
        lcd.print("Start blinken");
        if(s1 == HIGH)
          menu = 2;
        if(s2 == HIGH)
          funktion = 1;
        break;

      case 2:
        lcd.clear();
        lcd.print("Stopp blinken");
        if(s1 == HIGH)
          menu = 1;
        if(s2 == HIGH)
          funktion = 0;
        break;
    }
    alt_s1 = s1;
    alt_s2 = s2;
    delay(10);
  }

    switch (funktion) {
      case 0:
        digitalWrite(led, LOW);
        break;
      case 1:
        Serial.println(hilfe);
        if(hilfe < 100){
          digitalWrite(led, HIGH);
          delay(10);
          hilfe++;
        }
        else if(hilfe > 99 && hilfe < 200){
          digitalWrite(led, LOW);
          delay(10);
          hilfe++;
        }
        else
          hilfe = 0;
        break;
    }
  }
