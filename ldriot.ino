#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi credentials
const char* ssid = "YOUR WIFI NAME";
const char* pass = "YOUR PASSWORD";

// KiwisIoT Topic ID
const char* topic = "DASHBOARD TOPIC ID";

// Pin configuration
#define LDR_PIN A0
#define LED_PIN D1

// Create KiwisIoT object
KiwisIoT kiwisiot(ssid, pass, topic);

// Adjust this threshold after testing
int threshold = 500;

void setup() {

  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);

  kiwisiot.begin();

  Serial.println("Street Light Monitoring System");
  Serial.println("KiwisIoT Initialized");
}

void loop() {

  kiwisiot.run();

  // Read LDR value
  int ldrValue = analogRead(LDR_PIN);

  String lightStatus;
  String ledStatus;

  // Check darkness
  if (ldrValue < threshold) {

    lightStatus = "BRIGHT";
    ledStatus = "LOW";

    digitalWrite(LED_PIN, LOW);
  }
  else {

    lightStatus = "DARK";
    ledStatus = "HIGH";

    digitalWrite(LED_PIN, HIGH);
  }

  // Send data to KiwisIoT
  kiwisiot.send("0", ldrValue);
  kiwisiot.send("1", lightStatus);
  kiwisiot.send("2", ledStatus);
  kiwisiot.send("3", digitalRead(LED_PIN));

  // Serial Monitor
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  Serial.print("Light Condition: ");
  Serial.println(lightStatus);

  Serial.print("LED Status: ");
  Serial.println(ledStatus);

  Serial.println("----------------------");

  delay(3000);
}
