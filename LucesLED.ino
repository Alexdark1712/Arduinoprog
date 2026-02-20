const int LEDamarillo=3;
const int LEDrojo=2;
const int LEDazul=4;
const int LEDverde=5;
const int LEDblanco=6;

void setup()
{
  pinMode(LEDamarillo, OUTPUT);
  pinMode(LEDrojo, OUTPUT);
  pinMode(LEDazul, OUTPUT);
  pinMode(LEDverde, OUTPUT);
  pinMode(LEDblanco, OUTPUT);
}

void loop()
{
  digitalWrite(LEDamarillo, HIGH);
  delay(100);
  digitalWrite(LEDamarillo, LOW);
  delay(100);
  
  digitalWrite(LEDrojo, HIGH);
  delay(100);
  digitalWrite(LEDrojo, LOW);
  delay(100);
  
  digitalWrite(LEDazul, HIGH);
  delay(100);
  digitalWrite(LEDazul, LOW);
  delay(100);
  
  digitalWrite(LEDverde, HIGH);
  delay(100);
  digitalWrite(LEDverde, LOW);
  delay(100);
  
  digitalWrite(LEDblanco, HIGH);
  delay(100);
  digitalWrite(LEDblanco, LOW);
  delay(100);
}
  
    
  
    
  
