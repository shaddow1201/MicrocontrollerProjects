#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>

// IP address
IPAddress ip (192, 168, 1, 210);
IPAddress gateway(192, 168, 1, 1);  
IPAddress subnet(255, 255, 255, 0);  
const char* ssid = "<YOURSSID>";
const char* password = "<YOURPASS>";

#define DHTPIN 2
//DHTTYPE DHT11   // DHT 11
#define DHTTYPE DHT22   // DHT 22
DHT dht(DHTPIN, DHTTYPE);

// built in LED to show activity
#define led 13

ESP8266WebServer server(80);

String doSensorReading(String sType){
  String returnString = "";
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  char cHumidity[7], cTemperatureF[8], cTemperatureC[8];
  String Humidity, TemperatureF, TemperatureC, HeatIndexF, HeatIndexC;
  if (sType == "")
    returnString = "Error: Unspecified Type";
  if (sType == "TemperatureF"){
    // Read temperature as Fahrenheit (isFahrenheit = true)
    float f = dht.readTemperature(true);
    if (isnan(f)){
      Serial.println("Failed to read from DHT sensor!");
      returnString = "";
    } else {
      dtostrf(f,6,1, cTemperatureF);
      TemperatureF = String(cTemperatureF);
      returnString = TemperatureF;
    }
  }
  if (sType == "TemperatureC"){
    float t = dht.readTemperature();
    if (isnan(t)){
      Serial.println("Failed to read from DHT sensor!");
      returnString = "";
    } else {
      dtostrf(t,6,1, cTemperatureC);
      TemperatureC = String(cTemperatureC);
      returnString = TemperatureC;
    }
  }
  if (sType == "Humidity"){
    float h = dht.readHumidity();
    if (isnan(h)){
      Serial.println("Failed to read from DHT sensor!");
      returnString = "";
    } else {
      dtostrf(h,6,1, cHumidity);
      Humidity = String(cHumidity);
      returnString = Humidity;
    }
  }
  return returnString;
}

void handleRoot() {
  digitalWrite(led, 1);
  String output = doSensorReading("");
  server.send(200, "text/plain", output );
  Serial.println(output);
  digitalWrite(led, 0);
}

void handleSensor(String sType) {
  digitalWrite(led, 1);
  String output = doSensorReading(sType);
  server.send(200, "text/plain", output );
  Serial.println(output);
  digitalWrite(led, 0);
}

void handleNotFound(){
  String message = "File Not Found\n\n";
  message += "URI: ";
  message += server.uri();
  message += "\nMethod: ";
  message += (server.method() == HTTP_GET)?"GET":"POST";
  message += "\nArguments: ";
  message += server.args();
  message += "\n";
  for (uint8_t i=0; i<server.args(); i++){
    message += " " + server.argName(i) + ": " + server.arg(i) + "\n";
  }
  server.send(404, "text/plain", message);
}

void setup(void){
  
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  WiFi.config(ip, gateway, subnet); 
 
  Serial.println("");
  dht.begin();

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  if (MDNS.begin("esp8266")) {
    Serial.println("MDNS responder started");
  }
  server.on("/", handleRoot);
  server.on("/TemperatureF", [](){
    handleSensor("TemperatureF");
  });
  server.on("/TemperatureC", [](){
    handleSensor("TemperatureC");
  });
  server.on("/Humidity", [](){
    handleSensor("Humidity");
  });
  server.onNotFound(handleNotFound);
  server.begin();
  Serial.println("HTTP server started");
}

void loop(void){
  String retVal;
  server.handleClient();
}
