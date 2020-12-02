int pin=13;
int halfS=500;
int twoS=2000;

void setup()
{
  pinMode(pin,OUTPUT);
}
void loop()
{
  for(int i=0; i<5; i++)
  {
    digitalWrite(pin,HIGH);
    delay(halfS);
    digitalWrite(pin,LOW);
    delay(halfS);
  }
  for(int i=0; i<5; i++)
  {
    digitalWrite(pin,HIGH);
    delay(twoS);
    digitalWrite(pin,LOW);
    delay(twoS);
  }
  
}