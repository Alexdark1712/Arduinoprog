#include <Adafruit_Sensor.h>
#include <DHT.h>

#define DHTPIN A1

#define DHTTYPE DHT22 

const int LED=4;

DHT dht = DHT(DHTPIN, DHTTYPE);

void setup() {

  Serial.begin(9600);

  dht.begin();
}

void loop() {

  delay(2000);

  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  
  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  if(t>200)
  {
    digitalWrite(LED, HIGH);
    delay(20);
    digitalWrite(LED, LOW);
    delay(20);
    digitalWrite(LED, HIGH);
  }
  
  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);

 Serial.print("Humidity: ");
  Serial.print(h);
  Serial.print(" % ");
  Serial.print("Temperature: ");
  Serial.print(t);
  Serial.print(" \xC2\xB0");
  Serial.print("C | ");
  Serial.print(f);
  Serial.print(" \xC2\xB0");
  Serial.print("F ");
  Serial.print("Heat index: ");
  Serial.print(hic);
  Serial.print(" \xC2\xB0");
  Serial.print("C | ");
  Serial.print(hif);
  Serial.print(" \xC2\xB0");
  Serial.println("F");
}
