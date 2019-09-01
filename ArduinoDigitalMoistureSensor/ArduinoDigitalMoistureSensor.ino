#define SensorPin 2

int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (2400);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);
  Serial.write(val);
      
  delay(1000);
}
