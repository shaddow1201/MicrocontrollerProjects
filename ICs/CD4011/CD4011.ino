#define input1 2
#define input2 3
#define input3 4
#define input4 5
#define input5 6
#define input6 7
#define input7 8
#define input8 9

int delaymSec = 100;
void writeMessage(String message){
  Serial.println (message);
}

void resetLEDs(){
  writeMessage("Reset LEDs");
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  digitalWrite(input3, HIGH);
  digitalWrite(input4, HIGH);
  digitalWrite(input5, HIGH);
  digitalWrite(input6, HIGH);
  digitalWrite(input7, HIGH);
  digitalWrite(input8, HIGH);
}



void setup() {
  // put your setup code here, to run once:
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input4, OUTPUT);
  pinMode(input5, OUTPUT);
  pinMode(input6, OUTPUT);
  pinMode(input7, OUTPUT);
  pinMode(input8, OUTPUT);
  Serial.begin(9600);

}


void loop() {
  writeMessage("BEGIN TEST");
  // put your main code here, to run repeatedly:
  resetLEDs();
  // Starting Case for LED 1
  writeMessage("LED1: OFF = Input1: High & Input2: High");
  digitalWrite(input1, HIGH);
  digitalWrite(input2, HIGH);
  delay (500);
  writeMessage("LED1: ON = Input1: Low & Input2: High");
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  delay(500);
  writeMessage("LED1: ON = Input1: High & Input2: Low");
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  delay(500);
  writeMessage("LED1: ON = Input1: Low & Input2: Low");
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  delay(500);
  resetLEDs();
  // Starting Case for LED 2
  writeMessage("LED2: OFF = Input3: High & Input4: High");
  digitalWrite(input3, HIGH);
  digitalWrite(input4, HIGH);
  delay (500);
  writeMessage("LED2: ON = Input3: Low & Input4: High");
  digitalWrite(input3, LOW);
  digitalWrite(input4, HIGH);
  delay(500);
  writeMessage("LED2: ON = Input3: High & Input4: Low");
  digitalWrite(input3, HIGH);
  digitalWrite(input4, LOW);
  delay(500);
  writeMessage("LED2: ON = Input3: Low & Input4: Low");
  digitalWrite(input3, LOW);
  digitalWrite(input4, LOW);
  delay(500);
  // Starting Case for LED 3
  resetLEDs();
  writeMessage("LED3: OFF = Input5: High & Input6: High");
  digitalWrite(input5, HIGH);
  digitalWrite(input6, HIGH);
  delay (500);
  writeMessage("LED3: ON = Input5: Low & Input6: High");
  digitalWrite(input5, LOW);
  digitalWrite(input6, HIGH);
  delay(500);
  writeMessage("LED3: ON = Input5: High & Input6: Low");
  digitalWrite(input5, HIGH);
  digitalWrite(input6, LOW);
  delay(500);
  writeMessage("LED3: ON = Input5: Low & Input6: Low");
  digitalWrite(input5, LOW);
  digitalWrite(input6, LOW);
  delay(500);
  // Starting Case for LED 4
  resetLEDs();
  writeMessage("LED4: OFF = Input7: High & Input8: High");
  digitalWrite(input7, HIGH);
  digitalWrite(input8, HIGH);
  delay (500);
  writeMessage("LED4: ON = Input7: Low & Input8: High");
  digitalWrite(input7, LOW);
  digitalWrite(input8, HIGH);
  delay(500);
  writeMessage("LED4: ON = Input7: High & Input8: Low");
  digitalWrite(input7, HIGH);
  digitalWrite(input8, LOW);
  delay(500);
  writeMessage("LED4: ON = Input7: Low & Input8: Low");
  digitalWrite(input7, LOW);
  digitalWrite(input8, LOW);
  delay(500);
  writeMessage ("End Test");
}
