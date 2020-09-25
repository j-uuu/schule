float analogwert;                   //Variable für Analogwert
float ergebins;                     //Variable für Ergebnis
int ganzzahl;                       //Variable für Ganzzahl
void setup() {                      //Setzte Pin 2-7 auf Output
  for(int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);               //Starte Serial Monitor
}

void loop() {
  analogwert = analogRead(0);       //Analogwert einlesen
  ergebins = 5 * analogwert / 1023; //Analogwert in Spannung umrechnen
  Serial.println(ergebins);         //Ergebnis zur kontrolle ausgeben
  ganzzahl = ergebins;
  switch (ganzzahl) {
    case 1:
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      break;
    case 2:
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      break;
    case 3:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
      break;
    case 4:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      break;
    case 5:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH);
      break;
    case 0:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      digitalWrite(6,LOW);
  }
}
