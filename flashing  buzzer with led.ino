const int buzzer=4;
const int button=7;
const int LED=2;
int shapebutton;

void setup()
{
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  shapebutton=digitalRead(button);
  if (shapebutton==1)
  {
    digitalWrite(LED, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(200);
    digitalWrite(buzzer, LOW);
    delay(200);
    digitalWrite(buzzer,HIGH);

  }
  
  else
  {
    digitalWrite(LED, LOW);
    digitalWrite(buzzer, LOW);
  }
}
