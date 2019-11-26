#define SensorPin 10
#define LEDPin 13
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(SensorPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(SensorPin) == HIGH){
    Serial.write("HIGH - Water Needed.");
    digitalWrite(LEDPin, HIGH);
  } else {
    Serial.write("LOW - No Water Needed.");
    digitalWrite(LEDPin, LOW);
  }
  Serial.write("\n");
  delay(1000);
}
