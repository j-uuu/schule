
int taster = 10;
int led = 2;

void setup() {
  pinMode(taster, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if(digitalRead(taster) == HIGH)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);

}
