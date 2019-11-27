#include <NTPClient.h>
// change next line to use with another board/shield
#include <WiFi.h> // for WiFi shield
#include <WiFiUdp.h>

const char *ssid     = "<YOURSSID>";
const char *password = "<YOURPASSWORD>";

WiFiUDP ntpUDP;

// By default 'time.nist.gov' is used with 60 seconds update interval and
// no offset
//NTPClient timeClient(ntpUDP);
NTPClient timeClient(ntpUDP, "us.pool.ntp.org", -7*3600, 160000);

// You can specify the time server pool and the offset, (in seconds)
// additionaly you can specify the update interval (in milliseconds).
// NTPClient timeClient(ntpUDP, "europe.pool.ntp.org", 3600, 60000);

void setup(){
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }

  timeClient.begin();
}

void loop() {
  timeClient.update();
  Serial.print("Formatted Time: ");
  Serial.println(timeClient.getFormattedTime());
  Serial.print("Epoch Time: ");
  Serial.println(timeClient.getEpochTime());

  delay(1000);
}
