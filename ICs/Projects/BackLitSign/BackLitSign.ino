#define RELAY_PIN_A 2
#define RELAY_PIN_B 3
#define TOUCH_SW_PIN 4
int state = LOW;  

void setup() 
{ 
  // Set modes for pin usage
  pinMode(TOUCH_SW_PIN, INPUT);
  pinMode(RELAY_PIN_A, OUTPUT);
  pinMode(RELAY_PIN_B, OUTPUT);
  // set inital states
  digitalWrite(RELAY_PIN_A, LOW);  
  digitalWrite(RELAY_PIN_B, LOW);  
  // start serial logger.
  Serial.begin(9600);
} 

void loop(){
  if (digitalRead(TOUCH_SW_PIN)){
    if (state == HIGH){
      state = LOW;
    } else {
      state = HIGH;
    }
    digitalWrite(RELAY_PIN_A, state);
    digitalWrite(RELAY_PIN_B, state);
  }
  delay(200);
}
