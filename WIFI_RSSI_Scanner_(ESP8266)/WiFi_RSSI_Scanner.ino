#include <ESP8266WiFi.h>

const char* ssid = "your wifi ssid";
const char* password = "your wifi password";
 
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
  Serial.printf("RSSI: %d dBm\n", WiFi.RSSI())
  //Printing interval
  delay(1000);
}
