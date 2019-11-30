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

void TestOutput(int testOutput){
  switch(testOutput){
    case 1:
      Serial.println("Begin Output 1 Test");
      digitalWrite(input1, LOW);
      digitalWrite(input2, LOW);
      Serial.println("inputs low, LED 1 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input1, HIGH);
      digitalWrite(input2, LOW);
      Serial.println("inputs H/L, LED 1 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input1, LOW);
      digitalWrite(input2, HIGH);
      Serial.println("inputs L/H, LED 1 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input1, HIGH);
      digitalWrite(input2, HIGH);
      Serial.println("inputs H/H, LED 1 should be off");
      delay(2000);
      resetLEDs();
      Serial.println("End of output 1 test");
      break;
    case 2:
      Serial.println("Begin Output 2 Test");
      digitalWrite(input3, LOW);
      digitalWrite(input4, LOW);
      Serial.println("inputs low, LED 2 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input3, HIGH);
      digitalWrite(input4, LOW);
      Serial.println("inputs H/L, LED 2 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input3, LOW);
      digitalWrite(input4, HIGH);
      Serial.println("inputs L/H, LED 2 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input3, HIGH);
      digitalWrite(input4, HIGH);
      Serial.println("inputs H/H, LED 2 should be off");
      delay(2000);
      resetLEDs();
      Serial.println("End of output 2 test");
      break;
    case 3:
      Serial.println("Begin Output 3 Test");
      digitalWrite(input5, LOW);
      digitalWrite(input6, LOW);
      Serial.println("inputs low, LED 3 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input5, HIGH);
      digitalWrite(input6, LOW);
      Serial.println("inputs H/L, LED 3 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input5, LOW);
      digitalWrite(input6, HIGH);
      Serial.println("inputs L/H, LED 3 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input5, HIGH);
      digitalWrite(input6, HIGH);
      Serial.println("inputs H/H, LED 3 should be off");
      delay(2000);
      resetLEDs();
      Serial.println("End of output 3 test");
      break;
    case 4:
      Serial.println("Begin Output 4 Test");
      digitalWrite(input7, LOW);
      digitalWrite(input8, LOW);
      Serial.println("inputs low, LED 4 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input7, HIGH);
      digitalWrite(input8, LOW);
      Serial.println("inputs H/L, LED 4 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input7, LOW);
      digitalWrite(input8, HIGH);
      Serial.println("inputs L/H, LED 4 should be on");
      delay(2000);
      resetLEDs();
      digitalWrite(input7, HIGH);
      digitalWrite(input8, HIGH);
      Serial.println("inputs H/H, LED 4 should be off");
      delay(2000);
      resetLEDs();
      Serial.println("End of output 4 test");
      break;
  }
}

void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  TestOutput(1);
  delay(2000);
  TestOutput(2);
  delay(2000);
  TestOutput(3);
  delay(2000);
  TestOutput(4);
  delay(2000);
 
  Serial.println("Cycle Complete");
}
