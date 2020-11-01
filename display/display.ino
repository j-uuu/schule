#include <LiquidCrystal.h>

#define rs 2
#define e 3
#define d4 4
#define d5 5
#define d6 6
#define d7 7
#define spalten 16
#define zeilen 2

LiquidCrystal lcdGruen(rs,e,d4,d5,d6,d7);

float analogwert;
float wertInVolt;


void setup(){
  lcdGruen.begin(spalten,zeilen);
  Serial.begin(9600);
}

void loop(){
  analogwert = analogRead(0);
  wertInVolt = analogwert / 1024 * 5;
  Serial.print(wertInVolt);
  Serial.println(" V");
  lcdGruen.clear();
  lcdGruen.print(wertInVolt);
  lcdGruen.print(" V");
  lcdGruen.setCursor(4,1);
  lcdGruen.print("Helllou");
  delay(20);
}
