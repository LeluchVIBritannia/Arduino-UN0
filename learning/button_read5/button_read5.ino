int button = 2;
void setup() {
  pinMode(button , INPUT);
  Serial.begin(9600);
}

void loop() {
  int State_button = digitalRead(button);

  Serial.println(State_button);
  delay(1);

}
