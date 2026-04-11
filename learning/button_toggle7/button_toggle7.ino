int ledState = LOW;
int lastButton = HIGH; //State 

void setup() {
  pinMode(2 ,INPUT_PULLUP);
  pinMode(12 , OUTPUT);
  pinMode(8 , OUTPUT);  
}

void loop() {
  int ButtonCurentState = digitalRead(2);

  if(lastButton == HIGH && ButtonCurentState == LOW){
    ledState = !ledState;
  }


  digitalWrite(12 , ledState);
  digitalWrite(8 , ledState);
  lastButton = ButtonCurentState;
}
