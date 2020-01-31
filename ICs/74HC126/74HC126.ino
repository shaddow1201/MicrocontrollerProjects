#define OE1 2
#define INPUT1 3
#define OE2 4
#define INPUT2 5
#define OE3 6
#define INPUT3 7
#define OE4 8
#define INPUT4 9

void setup() {
  // put your setup code here, to run once:
  pinMode(OE1, OUTPUT);
  pinMode(INPUT1, OUTPUT);
  pinMode(OE2, OUTPUT);
  pinMode(INPUT2, OUTPUT);
  pinMode(OE3, OUTPUT);
  pinMode(INPUT3, OUTPUT);
  pinMode(OE4, OUTPUT);
  pinMode(INPUT4, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  delay(5000);
  reset();
}

void reset(){
  digitalWrite(OE1, HIGH);
  digitalWrite(INPUT1, LOW);
  digitalWrite(OE2, HIGH);
  digitalWrite(INPUT2, LOW);
  digitalWrite(OE3, HIGH);
  digitalWrite(INPUT3, LOW);
  digitalWrite(OE4, HIGH);
  digitalWrite(INPUT4, LOW);
}

void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  Serial.println("Input 1 Test");
  Serial.println("INPUT 1 TEST, INPUT=L OE=H, HI-Z (led off)");
  digitalWrite(OE1, LOW);
  digitalWrite(INPUT1, LOW);
  delay(2000);
  
  Serial.println("INPUT 1 TEST, INPUT=H OE=H, HI-Z (led off)");
  digitalWrite(OE1, LOW);
  digitalWrite(INPUT1, HIGH);
  delay(2000);
  
  Serial.println("INPUT 1 TEST, INPUT=L OE=L, LED1= OFF");
  digitalWrite(OE1, HIGH);
  digitalWrite(INPUT1, LOW);
  delay(2000);
  
  Serial.println("INPUT 1 TEST, INPUT=H OE=L, LED=ON");
  digitalWrite(OE1, HIGH);
  digitalWrite(INPUT1, HIGH);
  delay(2000);
  reset();

  Serial.println("Input 2 Test");
  Serial.println("INPUT 2 TEST, INPUT=L OE=H, HI-Z (led off)");
  digitalWrite(OE2, LOW);
  digitalWrite(INPUT2, LOW);
  delay(2000);
  
  Serial.println("INPUT 2 TEST, INPUT=H OE=H, HI-Z (led off)");
  digitalWrite(OE2, LOW);
  digitalWrite(INPUT2, HIGH);
  delay(2000);
  
  Serial.println("INPUT 2 TEST, INPUT=L OE=L, LED1= OFF");
  digitalWrite(OE2, HIGH);
  digitalWrite(INPUT2, LOW);
  delay(2000);
  
  Serial.println("INPUT 2 TEST, INPUT=H OE=L, LED=ON");
  digitalWrite(OE2, HIGH);
  digitalWrite(INPUT2, HIGH);
  delay(2000);
  reset();

  Serial.println("Input 3 Test");
  Serial.println("INPUT 3 TEST, INPUT=L OE=H, HI-Z (led off)");
  digitalWrite(OE3, LOW);
  digitalWrite(INPUT3, LOW);
  delay(2000);
  
  Serial.println("INPUT 3 TEST, INPUT=H OE=H, HI-Z (led off)");
  digitalWrite(OE3, LOW);
  digitalWrite(INPUT3, HIGH);
  delay(2000);
  
  Serial.println("INPUT 3 TEST, INPUT=L OE=L, LED1= OFF");
  digitalWrite(OE3, HIGH);
  digitalWrite(INPUT3, LOW);
  delay(2000);
  
  Serial.println("INPUT 3 TEST, INPUT=H OE=L, LED=ON");
  digitalWrite(OE3, HIGH);
  digitalWrite(INPUT3, HIGH);
  delay(2000);
  reset();

  Serial.println("Input 4 Test");
  Serial.println("INPUT 4 TEST, INPUT=L OE=H, HI-Z (led off)");
  digitalWrite(OE4, LOW);
  digitalWrite(INPUT4, LOW);
  delay(2000);
  
  Serial.println("INPUT 4 TEST, INPUT=H OE=H, HI-Z (led off)");
  digitalWrite(OE4, LOW);
  digitalWrite(INPUT4, HIGH);
  delay(2000);
  
  Serial.println("INPUT 4 TEST, INPUT=L OE=L, LED1= OFF");
  digitalWrite(OE4, HIGH);
  digitalWrite(INPUT4, LOW);
  delay(2000);
  
  Serial.println("INPUT 4 TEST, INPUT=H OE=L, LED=ON");
  digitalWrite(OE4, HIGH);
  digitalWrite(INPUT4, HIGH);
  delay(2000);
  reset();
  
  Serial.println("Cycle Complete");
}
