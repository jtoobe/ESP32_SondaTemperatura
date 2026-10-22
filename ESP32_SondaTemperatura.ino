/* Instalar la libreria de DallasTemperature 
en la IDE de Arduino */


#include <OneWire.h>
#include <DallasTemperature.h>

const int oneWirePin = 10;

OneWire oneWireBus(oneWirePin);
DallasTemperature sensor(&oneWireBus);

void setup() {
  Serial.begin(115200);
  sensor.begin();
}

void loop() {
  Serial.println("Leyendo temperaturas: ");
  sensor.requestTemperatures();

  Serial.print("Temperatura en sensor 0: ");
  Serial.print(sensor.getTempCByIndex(0));
  Serial.println(" ºC");

  delay(1000);
}
