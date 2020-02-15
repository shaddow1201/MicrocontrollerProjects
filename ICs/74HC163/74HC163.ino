#define CLR 2
#define CLK 3
#define A 4
#define B 5
#define C 6
#define D 7
#define ENP 8
#define LOAD 9
#define ENT 10

long milliDelay = 500;

void AsyncClearLEDs(){
  digitalWrite(CLK, LOW);
  digitalWrite(CLR, LOW); 
  digitalWrite(CLK, HIGH);
  digitalWrite(CLR, HIGH); 
  digitalWrite(CLK, LOW);
}

void SyncClearLEDs(){
  digitalWrite(ENT,LOW);
  digitalWrite(ENP,LOW);  
  digitalWrite(CLK, LOW);
  digitalWrite(CLR, LOW); 
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);  
  digitalWrite(CLK, HIGH);
  digitalWrite(CLR, HIGH);  
  digitalWrite(CLK, LOW);
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(CLR, OUTPUT);
  pinMode(CLK, OUTPUT);
  digitalWrite(CLK,LOW);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);  
  pinMode(ENP, OUTPUT);
  digitalWrite(ENP, LOW);
  pinMode(LOAD, OUTPUT);
  digitalWrite(LOAD, HIGH);
  pinMode(ENT, OUTPUT);
  digitalWrite(ENT, LOW);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  SyncClearLEDs();
  Serial.println("All LED's should be Off");
  delay(1000);
}

void testCounter(){
  digitalWrite(ENP, HIGH);
  digitalWrite(ENT, HIGH);
  // all should be reset to 0 now.
  for (int i=0; i < 15; i++){
    digitalWrite(CLK, LOW);
    digitalWrite(CLK, HIGH);
    Serial.println("Count: " + (String)(i+1));
    delay(milliDelay);
  }
  digitalWrite(ENP, LOW);
  digitalWrite(ENT, LOW);
  digitalWrite(CLK,LOW);
}
void testCounterLoad(){
  digitalWrite(ENP, HIGH);
  digitalWrite(CLK, LOW);
  digitalWrite(LOAD, LOW);
  digitalWrite(A, HIGH);
  digitalWrite(B, LOW);
  digitalWrite(C, HIGH);
  digitalWrite(D,LOW);
  digitalWrite(CLK, HIGH);
  digitalWrite(LOAD, HIGH);
  digitalWrite(ENP, LOW);
}
void loop() {
  Serial.println("Cycle Start");
  SyncClearLEDs();
  Serial.println("LED's OFF");
  delay(3000);
  testCounterLoad();
  Serial.println("LED's set to ON, OFF, ON, OFF");
  delay(3000);
  AsyncClearLEDs();
  delay(3000);
  Serial.println("LED's OFF");
  testCounter();
  delay(3000);
  Serial.println("Cycle Complete");
}
