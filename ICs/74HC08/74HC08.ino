#define input1 2
#define input2 3
#define input3 4
#define input4 5
#define input5 6
#define input6 7
#define input7 8
#define input8 9

void resetLEDs(){
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  digitalWrite(input3, LOW);
  digitalWrite(input4, LOW);
  digitalWrite(input5, LOW);
  digitalWrite(input6, LOW);
  digitalWrite(input7, LOW);
  digitalWrite(input8, LOW);
}

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
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(5000);
  Serial.println("LED 1 Test");
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  Serial.println("LED 1 should be On");
  delay(5000);
  resetLEDs();
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  Serial.println("LED 1 should be Off");
  delay(5000);
  resetLEDs();
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  Serial.println("LED 1 should be Off");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(5000);
  Serial.println("LED 2 Test");
  digitalWrite(input3, HIGH);
  digitalWrite(input4, HIGH);
  Serial.println("LED 2 should be On");
  delay(5000);
  resetLEDs();
  digitalWrite(input3, HIGH);
  digitalWrite(input4, LOW);
  Serial.println("LED 2 should be Off");
  delay(5000);
  resetLEDs();
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
  Serial.println("LED 2 should be Off");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(5000);
  Serial.println("LED 3 Test");
  digitalWrite(input5, HIGH);
  digitalWrite(input6, HIGH);
  Serial.println("LED 3 should be On");
  delay(5000);
  resetLEDs();
  digitalWrite(input5, HIGH);
  digitalWrite(input6, LOW);
  Serial.println("LED 3 should be Off");
  delay(5000);
  resetLEDs();
  digitalWrite(input5, LOW);
  digitalWrite(input6, HIGH);
  Serial.println("LED 3 should be Off");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(5000);
  Serial.println("LED 4 Test");
  digitalWrite(input7, HIGH);
  digitalWrite(input8, HIGH);
  Serial.println("LED 4 should be On");
  delay(5000);
  resetLEDs();
  digitalWrite(input7, HIGH);
  digitalWrite(input8, LOW);
  Serial.println("LED 4 should be Off");
  delay(5000);
  resetLEDs();
  digitalWrite(input7, LOW);
  digitalWrite(input8, HIGH);
  Serial.println("LED 4 should be Off");
  delay(5000);

}


void loop() {
}
