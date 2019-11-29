#define input1 2
#define input2 3
#define input3 4
#define input4 5
#define input5 6
#define input6 7
#define input7 8
#define input8 9
#define input9 10

void resetLEDs(){
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, HIGH);
  digitalWrite(input5, HIGH);
  digitalWrite(input6, HIGH);
  digitalWrite(input7, HIGH);
  digitalWrite(input8, HIGH);
  digitalWrite(input9, HIGH);
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
  pinMode(input9, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(5000);

}


void loop() {
  Serial.println("Cycle Start");
  digitalWrite(input1, LOW);
  digitalWrite(input4, LOW);
  digitalWrite(input7, LOW);
  Serial.println("ALL LED's should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input1, LOW);
  Serial.println("LED 1 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input2, LOW);
  Serial.println("LED 1 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input3, LOW);
  Serial.println("LED 1 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input4, LOW);
  Serial.println("LED 2 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input5, LOW);
  Serial.println("LED 2 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input6, LOW);
  Serial.println("LED 2 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input7, LOW);
  Serial.println("LED 3 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input8, LOW);
  Serial.println("LED 3 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  delay(1000);
  digitalWrite(input9, LOW);
  Serial.println("LED 3 should be on");
  delay(5000);
  resetLEDs();
  Serial.println("All LED's should be off");
  Serial.println("Cycle Complete");
  
}
