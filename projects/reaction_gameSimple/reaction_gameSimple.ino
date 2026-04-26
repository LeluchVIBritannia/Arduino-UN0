int startLed = 13;
int inputPlayer1 = 2;
int inputPlayer2 = 4;
int player1Led = 10;
int player2led = 11;
int state = 0;
unsigned long startTime;
int delayTime;

void setup() 
{
  //LED PIN
  pinMode(startLed , OUTPUT);
  pinMode(player1Led , OUTPUT);
  pinMode(player2led , OUTPUT);
  //Input pins
  pinMode(inputPlayer1 , INPUT_PULLUP);
  pinMode(inputPlayer2  , INPUT_PULLUP);

  //For starting signal
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  
}

void loop()
{

  int player2Led = 10;

  if(state == 0)
  {
    delayTime = random(100 , 3001); 
    startTime = millis();
    Serial.println("Wating");
    state = 1;
  }
  
  if(state == 1)
  {
    if(digitalRead(inputPlayer1) == LOW)
    {
      Serial.println("player 1 false start");
      digitalWrite(player2Led , HIGH);
      state = 2;
    }

    if(digitalRead(inputPlayer2) == LOW)
    {
      Serial.println("player 2 false start");
      digitalWrite(player1Led , HIGH);
      state = 2;
    }

    if(millis() - startTime >= delayTime)
    {
      digitalWrite(startLed , HIGH);
      Serial.println("Start");
      state = 3;
    }
  }

  if(state == 3)
  {
    if(digitalRead(inputPlayer1) == LOW)
    {
      Serial.println("player 1 Winns");
      digitalWrite(player1Led , HIGH);
      state = 2;
    }

    if(digitalRead(inputPlayer2) == LOW)
    {
      Serial.println("player 2 Winns");
      digitalWrite(player2Led , HIGH);
      state = 2;
    }
  }

  if(state == 2)
  {
    delay(2000);
    digitalWrite(player1Led , LOW);
    digitalWrite(player2Led , LOW);
    digitalWrite(startLed , LOW);
    state = 0;
  }
}
