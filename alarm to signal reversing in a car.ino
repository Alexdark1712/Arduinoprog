const int zumbador=4;
const int trigger=3;
const int echo=5;
float distancia=0;
float tiempo=0;


void setup()
{
  Serial.begin(9600);
  pinMode(zumbador, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop()
{
  medirdistancia();
  Serial.println(distancia);
  if(distancia>=50&&distancia==0)
  {
    digitalWrite(zumbador, LOW);
  }
  if(distancia>=20&&distancia<50)
  {
    zumbidodistanciamedia(zumbador);
  }
  if(distancia>=10&&distancia<20)
  {
    zumbidodistanciabaja(zumbador);
  }
  if (distancia<10&&distancia>1)
  {
    zumbidodistancianula(zumbador);
  }
 
}



void zumbidodistanciamedia(const int zumbador)
{
  digitalWrite(zumbador, HIGH);
  delay(500);
  digitalWrite(zumbador, LOW);
  delay(500);
  digitalWrite(zumbador, HIGH);
  delay(500);
  digitalWrite(zumbador, LOW);
  delay(500);
  digitalWrite(zumbador, HIGH);
  delay(500);
  digitalWrite(zumbador, LOW);
  delay(500);
}

void zumbidodistanciabaja(const int zumbador)
{
  digitalWrite(zumbador, HIGH);
  delay(200);
  digitalWrite(zumbador, LOW);
  delay(200);
  digitalWrite(zumbador, HIGH);
  delay(200);
  digitalWrite(zumbador, LOW);
  delay(200);
  digitalWrite(zumbador, HIGH);
  delay(200);
  digitalWrite(zumbador, LOW);
  delay(200);
}

void zumbidodistancianula(const int zumbador)
{
  digitalWrite(zumbador, HIGH);
  delay(50);
  digitalWrite(zumbador, LOW);
  delay(50);
  digitalWrite(zumbador, HIGH);
  delay(50);
  digitalWrite(zumbador, LOW);
  delay(50);
  digitalWrite(zumbador, HIGH);
  delay(50);
  digitalWrite(zumbador, LOW);
  delay(50);
}

float medirdistancia()
{
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  tiempo=pulseIn(echo, HIGH)/2;
  distancia=tiempo/29.2;
}
