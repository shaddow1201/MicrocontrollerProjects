#define input1 2
#define input2 3
#define input3 4

int intDelay = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(input3, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input1, OUTPUT);
  pinMode(input3, LOW);
  pinMode(input2, LOW);
  pinMode(input1, LOW); // led 1 should be off
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  delay(5000);
  TestOutput(1, 5000);
  TestOutput(2, 5000);
  TestOutput(3, 5000);
  TestOutput(4, 5000);
  TestOutput(5, 5000);
  TestOutput(6, 5000);
  TestOutput(7, 5000);
  TestOutput(8, 5000);
}

void TestOutput(int testOutput, int inDelay){
  switch(testOutput){
    case 1:
      Serial.println("Begin Output 1 Test");
      pinMode(input3, LOW);
      pinMode(input2, LOW);
      pinMode(input1, LOW);
      Serial.println("LED 1 should be off");
      delay(inDelay);
      Serial.println("End of output 1 test");
      break;
    case 2:
      Serial.println("Begin Output 2 Test");
      pinMode(input3, LOW);
      pinMode(input2, LOW);
      pinMode(input1, HIGH);
      Serial.println("LED 2 should be off");
      delay(inDelay);
      Serial.println("End of output 2 test");
      break;
    case 3:
      Serial.println("Begin Output 3 Test");
      pinMode(input3, LOW);
      pinMode(input2, HIGH);
      pinMode(input1, LOW);
      Serial.println("LED 3 should be off");
      delay(inDelay);
      Serial.println("End of output 3 test");
      break;
    case 4:
      Serial.println("Begin Output 4 Test");
      pinMode(input3, LOW);
      pinMode(input2, HIGH);
      pinMode(input1, HIGH);
      Serial.println("LED 4 should be off");
      delay(inDelay);
      Serial.println("End of output 4 test");
      break;
    case 5:
      Serial.println("Begin Output 5 Test");
      pinMode(input3, HIGH);
      pinMode(input2, LOW);
      pinMode(input1, LOW);
      Serial.println("LED 5 should be off");
      delay(inDelay);
      Serial.println("End of output 5 test");
      break;
    case 6:
      Serial.println("Begin Output 6 Test");
      pinMode(input3, HIGH);
      pinMode(input2, LOW);
      pinMode(input1, HIGH);
      Serial.println("LED 6 should be off");
      delay(inDelay);
      Serial.println("End of output 6 test");
      break;
    case 7:
      Serial.println("Begin Output 7 Test");
      pinMode(input3, HIGH);
      pinMode(input2, HIGH);
      pinMode(input1, LOW);
      Serial.println("LED 7 should be off");
      delay(inDelay);
      Serial.println("End of output 7 test");
      break;
    case 8:
      Serial.println("Begin Output 8 Test");
      pinMode(input3, HIGH);
      pinMode(input2, HIGH);
      pinMode(input1, HIGH);
      Serial.println("LED 8 should be off");
      delay(inDelay);
      Serial.println("End of output 8 test");
      break;
    default:
      pinMode(input3, LOW);
      pinMode(input2, LOW);
      pinMode(input1, LOW);
      Serial.println("LED 1 should be off");
      delay(inDelay);
      break;
  }
  
}

void loop() {
String incomingString;
  if (Serial.available()){
    incomingString = Serial.readString();
    Serial.println(incomingString);
    int tildeIndex = incomingString.indexOf('~');
    int strLen = incomingString.length();
    String strLED = incomingString.substring(0,tildeIndex);
    String milliSecToRunStr = incomingString.substring(tildeIndex+1, strLen);
    int intLED = strLED.toInt();
    int milliSecToRun = milliSecToRunStr.toInt();
    TestOutput(intLED, milliSecToRun);
    Serial.print(strLED);
    Serial.print(":");
    Serial.print(milliSecToRunStr);
    Serial.println(" Sec");
    Serial.println("Cycle Complete");
  }
}
