#define input1 2  // 13 Clock Inhibit
#define input2 3  // 14 Clock
#define input3 4  // 15 Reset

int delaySec = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
}

void resetLEDs(){
  digitalWrite(input3, HIGH);
  delay(500);
  digitalWrite(input3, LOW);
  delay(500);
}

void pulse(int pulseCount){
  for (int i=0; i < pulseCount; i++){
    Serial.println("pulse start.");
    digitalWrite(input2, HIGH);
    delay(500);
    digitalWrite(input2, LOW);
    delay(500);
    Serial.println("pulse end.");
  }
}

void loop() {
  resetLEDs();
  Serial.println("Only, Zero LED should be on");
  delay(500);
  Serial.println("pulse through each LED and reset.");
  pulse(10);
  resetLEDs();
  Serial.println("pulse through 5 LED's should be on");
  pulse(5);
  Serial.println("Clock Inhibit");
  digitalWrite(2, HIGH);
  Serial.println("LED 5 should be on, no chages even though pulsing 5 times");
  pulse(5);
  digitalWrite(2, LOW);
  Serial.println("Pulse through 2 LEDs to show that the clock inhibit is off");
  pulse(2);
  resetLEDs();
}
