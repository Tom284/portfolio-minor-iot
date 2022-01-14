#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>

const char* ssid = "wifiName";
const char* password = "password";

void setup() {
   Serial.begin(9600); 

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());
 
  Serial.println("Timer set to 5 seconds (timerDelay variable), it will take 5 seconds before publishing the first reading.");
  
  // put your setup code here, to run once:
  pinMode(D1, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}
int number = 0;

void loop() {
    delay(500);
    byte val = digitalRead(D1);
    
    if(val == HIGH){
      return;
    }
    
    if(WiFi.status()== WL_CONNECTED){
      WiFiClient client;
      HTTPClient http;
      String serverPath = "";
      if( (number % 2) == 0){
        serverPath = "http://192.168.137.63/off";
        Serial.println(serverPath);
        Serial.println(number);
      }
      else{
        serverPath = "http://192.168.137.63/on";
        Serial.println(serverPath);
        Serial.println(number);
      }
      
      number++;
      // Your Domain name with URL path or IP address with path
      http.begin(client, serverPath.c_str());
      
      // Send HTTP GET request
      int httpResponseCode = http.GET();
      
      if (httpResponseCode>0) {
        Serial.print("HTTP Response code: ");
        Serial.println(httpResponseCode);
        String payload = http.getString();
        Serial.println(payload);
      }
      else {
        Serial.print("Error code: ");
        Serial.println(httpResponseCode);
      }
      // Free resources
      http.end();
    }
  // put your main code here, to run repeatedly:
  
  if(val == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
  }
  else{
    digitalWrite(LED_BUILTIN, HIGH);
  }
}
