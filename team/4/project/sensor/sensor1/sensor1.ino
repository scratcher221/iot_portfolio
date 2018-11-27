#include <DHTesp.h>


/** Initialize DHT sensor */
DHTesp dht;

/** Pin number for DHT11 data pin */
int dhtPin = 16;

void setup()
{
  Serial.begin(9600);//initialize the serial
  
  // Initialize temperature sensor
  dht.setup(dhtPin, DHTesp::DHT11);
}

void loop()
{


  TempAndHumidity lastValues = dht.getTempAndHumidity();
  Serial.println("Temperature: " + String(lastValues.temperature,0));
  Serial.println("Humidity: " + String(lastValues.humidity,0));

  delay(200); //wait a while 
}
