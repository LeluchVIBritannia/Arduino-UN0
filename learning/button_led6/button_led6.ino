int led = 8;
int button = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led , OUTPUT);
  pinMode(button , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int state_button = digitalRead(button);

  if(state_button == LOW){
    digitalWrite(led , HIGH);
  }
  else{
    digitalWrite(led , LOW);
  }
  Serial.println(state_button);
}
