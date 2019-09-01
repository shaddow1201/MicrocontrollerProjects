#define SensorPin A2
#define LEDPin 13
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPin, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(SensorPin);
  float voltage = val * (5.0 /1023.0);
  Serial.println(voltage);
  if (voltage > 3.0){
    digitalWrite(LEDPin, HIGH);
  } else {
    digitalWrite(LEDPin, LOW);
  }
  delay(1000);
}
