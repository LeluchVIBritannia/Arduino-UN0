
void setup() {
  pinMode(13 , LOW);
  pinMode(12 , OUTPUT);
}

void loop() {

  digitalWrire(13 , HIGH);
  digitalWrire(12 , LOW);
  delay(100);
  digitalWrire(13 , LOW);
  digitalWrire(12 , HIGH);
  delay(100);
  digitalWrire(13 , HIGH);
  digitalWrire(12 , HIGH);
  delay(100);
  digitalWrire(13 , LOW);
  digitalWrire(12 , LOW);
  delay(100);
}
