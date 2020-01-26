#define input1 2
#define input2 3
#define input3 4
#define input4 5
#define input5 6
#define input6 7
#define input7 8
#define input8 9

int delaySec = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(input5, OUTPUT);
  pinMode(input6, OUTPUT);
  pinMode(input7, OUTPUT);
  pinMode(input8, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
}

void resetLEDs(){
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, HIGH);
  digitalWrite(input5, HIGH);
  digitalWrite(input6, HIGH);
  digitalWrite(input7, HIGH);
  digitalWrite(input8, HIGH);
}



void loop() {
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(delaySec);
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  Serial.println("LED 1 should be on single low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  Serial.println("LED 1 should be on, dual low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
  Serial.println("LED 2 should be on single low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input3, LOW);
  digitalWrite(input4, LOW);
  Serial.println("LED 2 should be on, dual low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input5, LOW);
  digitalWrite(input6, HIGH);
  Serial.println("LED 3 should be on single low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input5, LOW);
  digitalWrite(input6, LOW);
  Serial.println("LED 3 should be on, dual low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input7, LOW);
  digitalWrite(input8, HIGH);
  Serial.println("LED 4 should be on single low input");
  delay(delaySec);
  resetLEDs();
  delay(1000);
  digitalWrite(input7, LOW);
  digitalWrite(input8, LOW);
  Serial.println("LED 4 should be on, dual low input");
  delay(delaySec);
}
