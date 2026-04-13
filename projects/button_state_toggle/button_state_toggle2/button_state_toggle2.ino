int State = 0;
int LastButton = HIGH;
void setup() {
  pinMode(12 , OUTPUT);
  pinMode(8 , OUTPUT);
  pinMode(2  , INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  int CurrentState = digitalRead(2);

  if(CurrentState == LOW && LastButton == HIGH){
    State += 1;
    if(State >= 3){
      State = 0;
    }
  }

  switch(State){
    case 0:
      digitalWrite(12 , LOW);
      digitalWrite(8 , LOW);
      break;
    case 1:
      digitalWrite(12 , HIGH);
      break; 
    case 2:
      digitalWrite(12 , LOW);
      digitalWrite(8 , HIGH);
      break;  
  }
  Serial.println(CurrentState);
  LastButton = CurrentState;
}
