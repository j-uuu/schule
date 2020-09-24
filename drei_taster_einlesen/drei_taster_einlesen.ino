int tasterEins = 11;
int tasterZwei = 12;
int tasterDrei = 13;
int i = 0;


void setup() {
  for(int i = 11; i < 14; i++)
    pinMode(i, OUTPUT);
  for(int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
}

void lauflichtEins(){
  while(i < 5)
  {
    Serial.println(i);
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, HIGH);
        delay(200);
      }
    for(int j = 6; j >= 2; j--)
      {
        digitalWrite(j, LOW);
        delay(200);
      }
    i++;
  }
  for(int i = 2; i < 7; i++)
  digitalWrite(i, LOW);
  i = 0;
}

void lauflichtZwei(){
  for(int i = 0; i < 5; i++)
  {
    Serial.println(i);
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, HIGH);
        delay(200);
      }
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, LOW);
        delay(200);
      }
  }
  for(int i = 2; i < 7; i++)
  digitalWrite(i, LOW);
}

void lauflichtDrei(){
  for(int i = 2; i < 7; i++)
    digitalWrite(i, HIGH);
  delay(300);
  for(int i = 0; i < 5; i++)
  {
    for(int j = 2; j < 7; j++)
    {
      digitalWrite(j, LOW);
      delay(300);
      digitalWrite(j, HIGH);
      delay(100);
    }
  }
    for(int i = 2; i < 7; i++)
    digitalWrite(i, LOW);
}

void loop() {
  if(digitalRead(tasterEins) == HIGH)
    lauflichtEins();
  else if(digitalRead(tasterZwei) == HIGH)
    lauflichtZwei();
  else if(digitalRead(tasterDrei) == HIGH)
    lauflichtDrei();

}
