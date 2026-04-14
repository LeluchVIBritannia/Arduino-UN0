int led1 = 13;
int led2 = 12;
int led3 = 8;

void startLed(int l1 , int l2 , int l3 , int A);

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

  //The start procidure 3 led are truned on this need to be on only once
  int delayTime = random(100 , 2001);
  delay(1000);
  startLed(led1 , led2 , led3 , delayTime);
}
  

void loop()
{


}

void startLed(int l1 , int l2 , int l3 , int A)
{
  
  digitalWrite(l1 , HIGH);
  digitalWrite(l2 , LOW);
  digitalWrite(l3 , LOW);
  delay(1000);
  digitalWrite(l1 , HIGH);
  digitalWrite(l2 , HIGH);
  digitalWrite(l3 , LOW);
  delay(1000);
  digitalWrite(l1 , HIGH);
  digitalWrite(l2 , HIGH);
  digitalWrite(l3 , HIGH);
}