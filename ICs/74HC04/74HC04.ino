#define input1 2
#define input2 3
#define input3 4
#define input4 5
#define input5 6
#define input6 7

int timeDelay = 1000;

void resetLEDs(){
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, HIGH);
  digitalWrite(input5, HIGH);
  digitalWrite(input6, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(input5, OUTPUT);
  pinMode(input6, OUTPUT);

  Serial.begin(9600);
  Serial.println("BEGIN TEST");

}


void loop() {
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(timeDelay);
  Serial.println("LED 1 Test");
  digitalWrite(input1, LOW);
  Serial.println("LED 1 should be On");
  delay(timeDelay);
  resetLEDs();
  Serial.println("LED 2 Test");
  digitalWrite(input2, LOW);
  Serial.println("LED 2 should be On");
  delay(timeDelay);
  resetLEDs();
  Serial.println("LED 3 Test");
  digitalWrite(input3, LOW);
  Serial.println("LED 3 should be On");
  delay(timeDelay);
  resetLEDs();
    Serial.println("LED 4 Test");
  digitalWrite(input4, LOW);
  Serial.println("LED 4 should be On");
  delay(timeDelay);
  resetLEDs();
    Serial.println("LED 5 Test");
  digitalWrite(input5, LOW);
  Serial.println("LED 5 should be On");
  delay(timeDelay);
  resetLEDs();
    Serial.println("LED 6 Test");
  digitalWrite(input6, LOW);
  Serial.println("LED 6 should be On");
  delay(timeDelay);
  resetLEDs();





}
