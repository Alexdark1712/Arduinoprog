const int PIR=2;
const int LED=4;
int estadopir;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  estadopir=digitalRead(PIR);
  if(estadopir==1)
  {
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
  delay(50);
  digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}
