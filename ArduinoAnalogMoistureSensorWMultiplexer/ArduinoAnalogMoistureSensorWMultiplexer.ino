#define SensorPin A2
#define LEDPin 13

// MUX Select lines
const byte muxPinA = 9;
const byte muxPinB = 10;
const byte muxPinC = 11;

void setup() {
  // LED SETUP
  pinMode(LEDPin, OUTPUT);
  pinMode(muxPinA, OUTPUT);
  pinMode(muxPinB, OUTPUT);
  pinMode(muxPinC, OUTPUT);
  Serial.begin (9600);
}

int readSensor (const byte port){
  // select correct MUX channel
  digitalWrite (muxPinA, (port & 1) ? HIGH : LOW);
  digitalWrite (muxPinB, (port & 2) ? HIGH : LOW);
  digitalWrite (muxPinC, (port & 4) ? HIGH : LOW);
  // now read the sensor
  return analogRead (SensorPin);
}

float voltage = 0.0;

void loop() {
  for (byte i = 0; i < 7; i++){
    if(i < 3){
      Serial.print ("Sensor ");
      Serial.print (i);
      Serial.print (" reads: ");
      voltage = readSensor(i) * (5.0 /1023.0);
      Serial.println (voltage);
      delay(500);
    }
  }
  delay(1000);
}
