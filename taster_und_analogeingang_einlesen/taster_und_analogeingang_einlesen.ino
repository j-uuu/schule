int tasterEins = 11;
int tasterZwei = 12;
int tasterDrei = 13;
int i = 0;



float time() {
   return analogRead(0);

}

float rechnung() {
  float ergebins = time() * 5 / 1023;
  return ergebins;

}

void show() {
  Serial.println();
  Serial.print(rechnung());
  Serial.print(" V");
  delay(200);
}

void lauflichtEins() {
    //Serial.println(i);
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, HIGH);
        delay(time());
      }
    for(int j = 6; j >= 2; j--)
      {
        digitalWrite(j, LOW);
        delay(time());
      }
    i++;
  for(int i = 2; i < 7; i++)
  {
    digitalWrite(i, LOW);
    i = 0;
  }
}

void lauflichtZwei(){
  for(int i = 0; i < 5; i++)
  {
    //Serial.println(i);
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, HIGH);
        delay(time());
      }
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, LOW);
        delay(time());
      }
  }
  for(int i = 2; i < 7; i++)
  digitalWrite(i, LOW);
}

void lauflichtDrei(){
  for(int i = 2; i < 7; i++)
    digitalWrite(i, HIGH);
  delay(time());
  for(int i = 0; i < 5; i++)
  {
    for(int j = 2; j < 7; j++)
    {
      digitalWrite(j, LOW);
      delay(time());
      digitalWrite(j, HIGH);
      delay(time()/3);
    }
  }
    for(int i = 2; i < 7; i++)
    digitalWrite(i, LOW);
}

void setup() {
  for(int i = 11; i < 14; i++)
    pinMode(i, OUTPUT);
  for(int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  show();
  if(digitalRead(tasterEins) == HIGH)
    lauflichtEins();
  else if(digitalRead(tasterZwei) == HIGH)
    lauflichtZwei();
  else if(digitalRead(tasterDrei) == HIGH)
    lauflichtDrei();

}
