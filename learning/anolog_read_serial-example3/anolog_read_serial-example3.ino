void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int Value = analogRead(A2);
  float resistance = 0;
  float voltage    = 0;

  voltage = (Value * 5.0) / 1023.0;
  resistance = (Value / 1023.0) * 5000.0;

  Serial.print("Current estimated resistance ");
  Serial.print(resistance);
  Serial.print(" Current voltage ");
  Serial.println(voltage);

  delay(1000);
}
