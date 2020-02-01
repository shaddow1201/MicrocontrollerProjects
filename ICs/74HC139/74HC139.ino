#define IE1 2
#define A0 3
#define A1 4
#define IE2 5
#define B0 6
#define B1 7


void resetLEDs(){
  digitalWrite(IE1, HIGH);
  digitalWrite(IE2, HIGH);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  digitalWrite(B0, LOW);
  digitalWrite(B1, LOW);
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(IE1, OUTPUT);
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(IE2, OUTPUT);
  pinMode(B0, OUTPUT);
  pinMode(B1, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  resetLEDs();
  Serial.println("All LED's should be on");
  delay(5000);

}

void TestGroup1(){
  Serial.println("Test Group 1");
  digitalWrite(IE1,LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
  Serial.println("LED1=ON, LED2=ON, LED3=ON, LED4=OFF");
  delay(2000);
  digitalWrite(IE1,LOW);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, LOW);
  Serial.println("LED1=ON, LED2=ON, LED3=OFF, LED4=ON");
  delay(2000);
  digitalWrite(IE1,LOW);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  Serial.println("LED1=ON, LED2=OFF, LED3=ON, LED4=ON");
  delay(2000);
  digitalWrite(IE1,LOW);
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
  Serial.println("LED1=OFF, LED2=ON, LED3=ON, LED4=ON");
  delay(2000);
  digitalWrite(IE1,HIGH);
  Serial.println("LED1=ON, LED2=ON, LED3=ON, LED4=ON");
  delay(2000);
 
}

void TestGroup2(){
    Serial.println("Test Group 2");
  digitalWrite(IE2,LOW);
  digitalWrite(B0, LOW);
  digitalWrite(B1, LOW);
  Serial.println("LED5=ON, LED6=ON, LED7=ON, LED8=OFF");
  delay(2000);
  digitalWrite(IE2,LOW);
  digitalWrite(B0, HIGH);
  digitalWrite(B1, LOW);
  Serial.println("LED5=ON, LED6=ON, LED7=OFF, LED8=ON");
  delay(2000);
  digitalWrite(IE2,LOW);
  digitalWrite(B0, LOW);
  digitalWrite(B1, HIGH);
  Serial.println("LED5=ON, LED6=OFF, LED7=ON, LED8=ON");
  delay(2000);
  digitalWrite(IE2,LOW);
  digitalWrite(B0, HIGH);
  digitalWrite(B1, HIGH);
  Serial.println("LED5=OFF, LED6=ON, LED7=ON, LED8=ON");
  delay(2000);
  digitalWrite(IE1,HIGH);
  Serial.println("LED5=ON, LED6=ON, LED7=ON, LED8=ON");
  delay(2000);

}

void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  resetLEDs();
  delay(2000);
  TestGroup1();
  resetLEDs();
  delay(2000);
  TestGroup2();
  Serial.println("Cycle Complete");
}
