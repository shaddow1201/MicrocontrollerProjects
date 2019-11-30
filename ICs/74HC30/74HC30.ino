#define input1 2
#define input2 3
#define input3 4
#define input4 5
#define input5 6
#define input6 7
#define input7 8
#define input8 9

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

}


void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input1, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input2, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input3, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input4, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input5, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input6, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input7, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  digitalWrite(input8, LOW);
  Serial.println("LED should be on");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  Serial.println("Cycle Complete");
}
