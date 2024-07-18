#include <ESP8266WiFi.h>

const char* ssid = "your_wifi_ssid/(wifi name)";
const char* password = "your_wifi_password";
 
void setup() {
  Serial.begin(115200);
  delay(10);
  Serial.print("Trying to connect to WiFi ");
  
  //Connecting to WiFi
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected!");
}

void loop() {
  //Prints the RSSI, higher value => better strength
  Serial.printf("RSSI: %d dBm\n", WiFi.RSSI()); 
  delay(1000);
}
