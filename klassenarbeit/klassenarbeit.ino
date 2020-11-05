/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                                 *
 *                    1. Klassenarbeit Arduino                     *
 *                      Justus Karr BFSYS18                        *
 *                        6. November 2020                         *
 *    Analogwert einlesen, LEDs blinken lassen und Text ausgeben   *
 *                                                                 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <LiquidCrystal.h>

#define d4 8                             //Pins für Display
#define d5 9
#define d6 10
#define d7 11
#define rs 12
#define e 13
#define spalten 16                       //Anzahl Spalten des Displays
#define zeilen 2                         //Anzahl Zeilen des Displays

int poti = 0;                            //Varibale für analog Eingang
int taster = 7;                          //Varibale für Taster Ausgang
int led1 = 2;                            //Varibalen für LED Ausgänge
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;

float analogwert;                         //Varibale für Analogwert

LiquidCrystal lcd(rs,e,d4,d5,d6,d7);      //Display Pins zuweisen


void setup() {
  lcd.begin(spalten,zeilen);              //Display starte
  serial.begin(9600);                     //Serielle Schnittstelle starten
  pinMode(taster, INPUT);                 //Taster als Eingang setzten
  for(int i = 2; i < 7; i++)              //Alle LEDs als Ausgang setzen
    pinMode(i, OUTPUT)
}

void loop() {



}
