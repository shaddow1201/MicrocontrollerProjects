#include "FastLED.h"
// LED control pin
#define LED_PIN     D2
// # of LED's defined
#define NUM_LEDS    15
// LED Brightness
#define BRIGHTNESS  254
// LED Type
#define LED_TYPE    WS2812
// LED Strip color order
#define COLOR_ORDER GRB
// LED Object
CRGB leds[NUM_LEDS];

// Photoresistor pin
int LDR_Pin = A0; //analog pin 0
// Photoresistor Trigger Val 
//(value of light when low enough to warrent a check of the PIR)
int TriggerVal = 250;
// PIR Pin
int pirPin = D6; // Input for HC-S501
// PIR Read Value
int pirValue; // Place to store read PIR Value
// When Activated, how long does LED Stay on before shutting off.
// (milliseconds) seconds * 1000
long LEDOnLength = 90000;
// for Serial Display
int LEDOnLengthSeconds = LEDOnLength/1000;
// variable to handle current state of Lights (ON/OFF)
int currState;

// Photoresistor class that returns current 
// photo resistor value on the update function.
class PhotoResistorReader
{
  // Reader Pin
  int _PhotoResistor_Pin;
 
  // Constructor - creates a PhotoResistorReader 
  public:
  PhotoResistorReader(int Sensor_Pin)
  {
    _PhotoResistor_Pin = Sensor_Pin;
  }
  int Update()
  {
    return analogRead(_PhotoResistor_Pin);
  }
};
PhotoResistorReader pRR(LDR_Pin);

void setup(){
  // Start Serial Communication
  Serial.begin(9600);
  // SET LED pin for output
  pinMode(LED_PIN, OUTPUT);
  // Set PIR pin for input
  pinMode(pirPin, INPUT);
  // Set LED's type and details
  FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalPixelString );
  // Set inital LED State.
  currState = SetLEDsOFF();
  // PIR is unstable for the about the first 60 seconds (according to docs)
  // So delay until baseline reached.
  for(int i=1; i <= 60; i++){
    Serial.print("Initializing PIR (60 seconds) second:");
    Serial.println(i);
    delay(1000);
  }
}

void loop(){

  // do Photo resistor read
  int currReading = pRR.Update();
  Serial.println(currReading);
  // if lights on, and reading is less than trigger value, then shut lights off.
  if (currState == 1){
    if (currReading < TriggerVal){
        currState = SetLEDsOFF();
    }
  } else {
    // if reading >= the trigger value, then check PIR for movement, 
    //if movement, then turn on LED's for period described above
    if (currReading >= TriggerVal){
      delay(1000);
      pirValue = digitalRead(pirPin);
      Serial.print("PirVal: ");
      Serial.println(pirValue);
      if (pirValue == 1){
        currState = SetLEDsON();
        Serial.print("Delay ");
        Serial.print(LEDOnLengthSeconds);
        Serial.println(" seconds (with lights on).");
        for (int j=0; j < LEDOnLengthSeconds; j++){
          Serial.print("LED ON Seconds: " );
          SetLEDsON();
          Serial.println(j);
          delay(1000);
        }
        // when done, turn off lights.
        currState = SetLEDsOFF();
      }
    }
  }
  delay(1000); //check once per second
}

// Function to turn on lights, and set current state = 1
int SetLEDsON(){
  for( int i = NUM_LEDS-1; i >= 0; i--) {
    leds[i] = CRGB::White;
  } 
  FastLED.show();
  Serial.println("Turn On LEDS");
  return 1;
}
// Function to run off lights and set current state = 0
int SetLEDsOFF(){
  for( int i = NUM_LEDS-1; i >= 0; i--) {
    leds[i] = CRGB::Black;
  } 
  FastLED.show();
  Serial.println("Turn Off LEDS");
  return 0;
}

