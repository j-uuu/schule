int i = 0;

void setup() {
  for(int i = 2; i < 7; i++)
    pinMode(i, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  do
  {
    Serial.println(i);
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, HIGH);
        delay(50);
      }
    for(int j = 2; j < 7; j++)
      {
        digitalWrite(j, LOW);
        delay(50);
      }
    i++;
  }
  while(i < 5);
}
