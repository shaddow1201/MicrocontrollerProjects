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

}


void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  resetLEDs();
  Serial.println("LED should be off");
  delay(2000);
  
  Serial.println("Cycle Complete");
}
