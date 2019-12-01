#define input1 2
#define input2 3
#define input3 4



void setup() {
  // put your setup code here, to run once:
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
  pinMode(input1, LOW);
  pinMode(input2, LOW);
  pinMode(input3, LOW);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  delay(5000);
  
}

void TestOutput(int testOutput){
  switch(testOutput){
    case 1:
      Serial.println("Begin Output 1 Test");
      pinMode(input1, LOW);
      pinMode(input2, LOW);
      pinMode(input3, LOW);
      Serial.println("LED 1 should be off");
      delay(2000);
      Serial.println("End of output 1 test");
      break;
    case 2:
      Serial.println("Begin Output 2 Test");
      pinMode(input1, HIGH);
      pinMode(input2, LOW);
      pinMode(input3, LOW);
      Serial.println("LED 2 should be off");
      delay(2000);
      Serial.println("End of output 2 test");
      break;
    case 3:
      Serial.println("Begin Output 3 Test");
      pinMode(input1, LOW);
      pinMode(input2, HIGH);
      pinMode(input3, LOW);
      Serial.println("LED 3 should be off");
      delay(2000);
      Serial.println("End of output 3 test");
      break;
    case 4:
      Serial.println("Begin Output 4 Test");
      pinMode(input1, HIGH);
      pinMode(input2, HIGH);
      pinMode(input3, LOW);
      Serial.println("LED 4 should be off");
      delay(2000);
      Serial.println("End of output 4 test");
      break;
    case 5:
      Serial.println("Begin Output 5 Test");
      pinMode(input1, LOW);
      pinMode(input2, LOW);
      pinMode(input3, HIGH);
      Serial.println("LED 5 should be off");
      delay(2000);
      Serial.println("End of output 5 test");
      break;
    case 6:
      Serial.println("Begin Output 6 Test");
      pinMode(input1, HIGH);
      pinMode(input2, LOW);
      pinMode(input3, HIGH);
      Serial.println("LED 6 should be off");
      delay(2000);
      Serial.println("End of output 6 test");
      break;
    case 7:
      Serial.println("Begin Output 7 Test");
      pinMode(input1, LOW);
      pinMode(input2, HIGH);
      pinMode(input3, HIGH);
      Serial.println("LED 7 should be off");
      delay(2000);
      Serial.println("End of output 7 test");
      break;
    case 8:
      Serial.println("Begin Output 8 Test");
      pinMode(input1, HIGH);
      pinMode(input2, HIGH);
      pinMode(input3, HIGH);
      Serial.println("LED 8 should be off");
      delay(2000);
      Serial.println("End of output 8 test");
      break;
  }
}

void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  TestOutput(1);
  TestOutput(2);
  TestOutput(3);
  TestOutput(4);
  //TestOutput(5);
  //TestOutput(6);
  //TestOutput(7);
  //TestOutput(8); 
  Serial.println("Cycle Complete");
}
