
void setup() {
  for(int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i < 5; i++)
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
  }
}
