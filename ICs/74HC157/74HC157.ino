#define ABSELECT 2
#define A1 3
#define B1 4
#define A2 5
#define B2 6
#define A3 7
#define B3 8
#define A4 9
#define B4 10
#define GSTROBE 11

long milliDelay = 500;

void resetLEDs(){
  digitalWrite(GSTROBE, HIGH); 
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(B1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B2, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(B3, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(B4, LOW);  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(ABSELECT, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(A4, OUTPUT);
  pinMode(B4, OUTPUT);
  pinMode(GSTROBE, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  resetLEDs();
  Serial.println("All LED's should be Off");
  delay(5000);

}

void testGroup1(){
  digitalWrite(GSTROBE, LOW);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  Serial.println("LED 1 should be Off, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A1, HIGH);
  digitalWrite(B1, LOW);
  Serial.println("LED 1 should be On, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(B1, LOW);
  Serial.println("LED 1 should be Off, select B");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  Serial.println("LED 1 should be On, select B");
  delay(milliDelay);
  resetLEDs();
}

void testGroup2(){
  digitalWrite(GSTROBE, LOW);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  Serial.println("LED 2 should be Off, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  Serial.println("LED 2 should be On, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  Serial.println("LED 2 should be Off, select B");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  Serial.println("LED 2 should be On, select B");
  delay(milliDelay);
  resetLEDs();
}

void testGroup3(){
  digitalWrite(GSTROBE, LOW);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A3, LOW);
  digitalWrite(B3, HIGH);
  Serial.println("LED 3 should be Off, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A3, HIGH);
  digitalWrite(B3, LOW);
  Serial.println("LED 3 should be On, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A3, HIGH);
  digitalWrite(B3, LOW);
  Serial.println("LED 3 should be Off, select B");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A3, LOW);
  digitalWrite(B3, HIGH);
  Serial.println("LED 3 should be On, select B");
  delay(milliDelay);
  resetLEDs();
}

void testGroup4(){
  digitalWrite(GSTROBE, LOW);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A4, LOW);
  digitalWrite(B4, HIGH);
  Serial.println("LED 4 should be Off, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, LOW);
  digitalWrite(A4, HIGH);
  digitalWrite(B4, LOW);
  Serial.println("LED 4 should be On, select A");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A4, HIGH);
  digitalWrite(B4, LOW);
  Serial.println("LED 4 should be Off, select B");
  delay(milliDelay);
  digitalWrite(ABSELECT, HIGH);
  digitalWrite(A4, LOW);
  digitalWrite(B4, HIGH);
  Serial.println("LED 4 should be On, select B");
  delay(milliDelay);
  resetLEDs();
}

void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  testGroup1();
  testGroup2();
  testGroup3();
  testGroup4();
  Serial.println("Cycle Complete");
}
