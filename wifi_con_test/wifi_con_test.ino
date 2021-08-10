#include <WiFi.h>
const char* ssid = "hOTsPoT";
const char* pasw = "afk12345"; 
void setup() {
 
Serial.begin(115200);
wifi_con();
}

void loop() {
  
if (WiFi.status() == WL_CONNECTED)
{
  Serial.println(WiFi.localIP());
  delay(1000);
}
else
{
  Serial.println("WIFI Disconnected\nRestarting ESP");
  WiFi.disconnect();
  wifi_con();
  
}
}
void wifi_con()
{
  WiFi.begin(ssid, pasw);
while (WiFi.status() != WL_CONNECTED)
{
  Serial.println("Connecting to WIFI");
  delay(1000);
}
Serial.println("WIFI Connected");
}
