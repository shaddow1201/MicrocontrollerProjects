#define Relay1 2
#define Relay2 3
#define Relay3 4
#define Relay4 5
#define Relay5 6
#define Relay6 7
#define Relay7 8
#define Relay8 9
#define LEDPIN 13


void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);
  // set pin modes
  pinMode(Relay1, OUTPUT);     // Initialize Relay1 as output
  pinMode(Relay2, OUTPUT);     // Initialize Relay2 as output
  pinMode(Relay3, OUTPUT);     // Initialize Relay3 as output
  pinMode(Relay4, OUTPUT);     // Initialize Relay4 as output
  pinMode(Relay5, OUTPUT);     // Initialize Relay1 as output
  pinMode(Relay6, OUTPUT);     // Initialize Relay2 as output
  pinMode(Relay7, OUTPUT);     // Initialize Relay3 as output
  pinMode(Relay8, OUTPUT);     // Initialize Relay4 as output
  pinMode(LEDPIN, OUTPUT);     // Initialize LEDPIN as output
  // set low state
  digitalWrite(Relay1, LOW);    // turn Relay 1 off
  digitalWrite(Relay2, LOW);    // turn Relay 2 off
  digitalWrite(Relay3, LOW);    // turn Relay 3 off
  digitalWrite(Relay4, LOW);    // turn Relay 4 off
  digitalWrite(Relay5, LOW);    // turn Relay 5 off
  digitalWrite(Relay6, LOW);    // turn Relay 6 off
  digitalWrite(Relay7, LOW);    // turn Relay 7 off
  digitalWrite(Relay8, LOW);    // turn Relay 8 off
  digitalWrite(LEDPIN, LOW);    // turn LEDPIN off
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Relay1, HIGH);
  digitalWrite(LEDPIN, HIGH);
  delay(1000);
  digitalWrite(Relay1, LOW);
  digitalWrite(Relay2, HIGH);
  delay(1000);
  digitalWrite(Relay2, LOW);
  digitalWrite(Relay3, HIGH);
  delay(1000);
  digitalWrite(Relay3, LOW);
  digitalWrite(Relay4, HIGH);
  delay(1000);
  digitalWrite(Relay4, LOW);
  digitalWrite(Relay5, HIGH);
  delay(1000);
  digitalWrite(Relay5, LOW);
  digitalWrite(Relay6, HIGH);
  delay(1000);
  digitalWrite(Relay6, LOW);
  digitalWrite(Relay7, HIGH);
  delay(1000);
  digitalWrite(Relay7, LOW);
  digitalWrite(Relay8, HIGH);
  delay(1000);
  digitalWrite(Relay8, LOW);
  digitalWrite(LEDPIN, LOW);
  delay(1000);

}
