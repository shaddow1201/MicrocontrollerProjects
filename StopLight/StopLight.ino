/*
Stop Light Code v. 1.0
By Richard Noordam
Richard.Noordam@gmail.com
Based on several base modules cobbled together.
*/

#define pinLedRed 12
#define pinLedYellow 11
#define pinLedGreen 10
#define TRIGGER 7
#define ECHO    8
#define theDelay 250
int redDistance;
int greenDistance;
int misReadValue;
int retDistance;
int compareDistance;

void setup() {
  //initialize values
  redDistance = 175;
  greenDistance = 350;
  misReadValue = 0;
  // set serial baud rate
  Serial.begin (9600);
  // set pin modes
  pinMode(pinLedRed, OUTPUT);     // Initialize RedLed pin as an output
  pinMode(pinLedYellow, OUTPUT);     // Initialize the Yellow pin as an output
  pinMode(pinLedGreen, OUTPUT);     // Initialize the Green pin as an output
  pinMode(TRIGGER, OUTPUT);
  pinMode(ECHO, INPUT);
  // set start position of LED pins
  digitalWrite(pinLedRed, LOW);     // turn Red off
  digitalWrite(pinLedYellow, LOW);  // turn Yellow off
  digitalWrite(pinLedGreen, LOW);   // turn Green off
  delay(3000);
}

// the loop function runs over and over again forever

// get distance from hc-sr04 ultrasonic distance sensor.
int getDistance(){
 long duration, distance;
  digitalWrite(TRIGGER, LOW);  
  delayMicroseconds(2); 
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIGGER, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = (duration/2) / 29.1;
  return (int)distance;
}
// turn on yellow LED
void yellowOn(){
    //Serial.println("Yellow");
    digitalWrite(pinLedGreen, LOW);    // turn Green OFF
    digitalWrite(pinLedYellow, HIGH);   // turn Yellow ON
    digitalWrite(pinLedRed, LOW);      // turn Red OFF
}
// turn on green LED
void greenOn(){
    //Serial.println("Green");
    digitalWrite(pinLedGreen, HIGH);    // turn Green on
    digitalWrite(pinLedYellow, LOW);   // turn Yellow OFF
    digitalWrite(pinLedRed, LOW);      // turn Red OFF
}
// turn on red LED
void redOn(){
    //Serial.println("Red");
    digitalWrite(pinLedGreen, LOW);    // turn Green OFF
    digitalWrite(pinLedYellow, LOW);   // turn Yellow OFF
    digitalWrite(pinLedRed, HIGH);      // turn Red ON
}

String returnColor(int myDistance){
  String retColor = "ERROR";
  if (myDistance > 0 and myDistance < redDistance){
    retColor = "Red";
  }
  if (myDistance >= redDistance and myDistance < greenDistance){
    retColor = "Yellow";
  }
  if (myDistance >= greenDistance){
    retColor = "Green";
  }
  if (retColor == "ERROR"){
    Serial.print("NoColor: Error, Range Failure:");
    Serial.println(myDistance);
    retColor = "Green";                                                                                                                                                    
  }
  return retColor;  
}
String color;

void loop() {
  
  retDistance = getDistance();
  Serial.print("Distance:");
  Serial.print(retDistance);
  color = returnColor(retDistance);
  Serial.print(":   Color:");
  Serial.println(color);
  // turn on green if long distance
  if (color == "Green"){
    greenOn();
  }
  if (color == "Yellow"){
    yellowOn();
  }
  if (color == "Red"){
    redOn();
  }
  delay(theDelay);                    
}

