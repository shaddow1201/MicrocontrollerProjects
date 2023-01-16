#define CLK1 2
#define CLR1 3
#define CLK2 4
#define CLR2 5

long milliDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(CLK1, OUTPUT);
  pinMode(CLR1, OUTPUT);
  pinMode(CLK2, OUTPUT);
  pinMode(CLR2, OUTPUT);
  digitalWrite(CLK1,LOW);
  digitalWrite(CLR1,HIGH);
  digitalWrite(CLR1,LOW);
  digitalWrite(CLK2,LOW);
  digitalWrite(CLR2,HIGH);
  digitalWrite(CLR2,LOW);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  Serial.println("All LED's should be Off");
  delay(1000);
}

void loop() {
  Serial.println("Cycle Start");
  digitalWrite(CLK1,HIGH);
  digitalWrite(CLK1,LOW);
  delay(100);  
  
  Serial.println("Cycle Complete");
}
