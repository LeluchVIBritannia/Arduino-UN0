int startLed = 13;
int inputPlater1 = 12;
int inputPlater2 = 8;
int player1Led;
int player2led;
int delayTime = random(100 , 2001);

void setup() 
{
  //LED PIN
  pinMode(startLed , OUTPUT);
  pinMode(player1Led , OUTPUT);
  pinMode(playe21Led , OUTPUT);
  //Input pins
  pinMode(inputPlater1 , INPUT_PULLUP);
  pinMode(inputPlater2  , INPUT_PULLUP);

  //For starting signal
  Serial.begin(9600);
  randomSeed(analogRead(A0));

  delay(delayTime);
  digitalWrite(startLed , HIGH);
}

void loop()
{
  

}
