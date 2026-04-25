int startLed = 13;
int inputPlater1 = 12;
int inputPlater2 = 8;
int player1Led = 10;
int player2led = 11;
int delayTime;

void setup() 
{
  //LED PIN
  pinMode(startLed , OUTPUT);
  pinMode(player1Led , OUTPUT);
  pinMode(player2led , OUTPUT);
  //Input pins
  pinMode(inputPlater1 , INPUT_PULLUP);
  pinMode(inputPlater2  , INPUT_PULLUP);

  //For starting signal
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  delayTime = random(100 , 3001);
  delay(delayTime);
  digitalWrite(startLed , HIGH);
  Serial.println(delayTime);
}

void loop()
{
  

}
