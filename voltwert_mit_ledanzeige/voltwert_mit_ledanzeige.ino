float analogwert;                   //Variable für Analogwert
float ergebins;                     //Variable für Ergebnis

void setup() {                      //Setzte Pin 2-7 auf Output
  for(int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);               //Starte Serial Monitor
}

void loop() {
  analogwert = analogRead(0);       //Analogwert einlesen
  ergebins = 5 * analogwert / 1023; //Analogwert in Spannung umrechnen
  Serial.println(ergebins);         //Ergebnis zur kontrolle ausgeben
  if(ergebins > 0)                  //LED 1 an wenn Ergebnis größer 0V
    digitalWrite(2, HIGH);
  if(ergebins > 1)                  //LED 2 an wenn Ergebnis größer 1V
    digitalWrite(3, HIGH);
  if(ergebins > 2)                  //LED 3 an wenn Ergebnis größer 2V
    digitalWrite(4, HIGH);
  if(ergebins > 3)                  //LED 4 an wenn Ergebnis größer 3V
    digitalWrite(5, HIGH);
  if(ergebins > 4)                  //LED 5 an wenn Ergebnis größer 4V
    digitalWrite(6, HIGH);
  delay(200);                       //verzögerung damit LEDs nicht gleich wieder aus gehen
  for (int i = 2; i < 7; i++)       //Alle LEDs wieder ausschalten
  {
    digitalWrite(i, LOW);
  }
}
