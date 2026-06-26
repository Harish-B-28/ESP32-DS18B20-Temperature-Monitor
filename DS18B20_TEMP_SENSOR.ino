#define BLYNK_TEMPLATE_ID "TMPLxxxxxx"
#define BLYNK_TEMPLATE_NAME "DS18B20 Temp Sensor"
#define BLYNK_AUTH_TOKEN "Your_Blynk_Token_Here"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <OneWire.h>
#include <DallasTemperature.h>

// WiFi Credentials (Phone Hotspot)
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "WIFI_PASSWORD";

// DS18B20 connected to GPIO 25
#define ONE_WIRE_BUS 25

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

BlynkTimer timer;

void sendTemperature()
{
  sensors.requestTemperatures();

  float tempC = sensors.getTempCByIndex(0);

  if (tempC == DEVICE_DISCONNECTED_C)
  {
    Serial.println("DS18B20 not found!");
    return;
  }

  float tempF = DallasTemperature::toFahrenheit(tempC);

  // Send data to Blynk
  Blynk.virtualWrite(V0, tempC);
  Blynk.virtualWrite(V1, tempF);

  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.print(" °C   ");
  Serial.print(tempF);
  Serial.println(" °F");
}

void setup()
{
  Serial.begin(115200);

  sensors.begin();

  Serial.println("Connecting to Blynk...");

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  timer.setInterval(2000L, sendTemperature);
}

void loop()
{
  Blynk.run();
  timer.run();
}
