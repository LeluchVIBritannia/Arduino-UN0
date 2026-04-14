int led1 = 13;
int led2 = 12;
int led3 = 8;

void startLed(int led1 , int led2 , int led3 , int A);

void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  //Start LED
  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);

  //User Input
  pinMode(2 , INPUT_PULLUP);
  pinMode(4 , INPUT_PULLUP);
}

void loop()
{
  int time = random(100 , 2001);
  startLed(led1 , led2 , led3 , time);


}

void startLed(int led1 , int led2 , int led3 , int A)
{
  delay(100);
  digitalWrite(led1 , HIGH);
  digitalWrite(led2 , LOW);
  digitalWrite(led3 , LOW);
  delay(1000);
  digitalWrite(led1 , HIGH);
  digitalWrite(led2 , HIGH);
  digitalWrite(led3 , LOW);
  delay(A);
  digitalWrite(led1 , HIGH);
  digitalWrite(led2 , HIGH);
  digitalWrite(led3 , HIGH);
}