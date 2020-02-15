#define OE1 2
#define A11 3
#define A12 4
#define A13 5
#define A14 6
#define A21 7
#define A22 8
#define A23 9
#define A24 10
#define OE2 11

long milliDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(A11, OUTPUT);
  digitalWrite(A11, LOW);
  pinMode(A12, OUTPUT);
  digitalWrite(A12, LOW);
  pinMode(A13, OUTPUT);
  digitalWrite(A13, LOW);
  pinMode(A14, OUTPUT);
  digitalWrite(A14, LOW);
  pinMode(A21, OUTPUT);
  digitalWrite(A21, LOW);
  pinMode(A22, OUTPUT);
  digitalWrite(A22, LOW);
  pinMode(A23, OUTPUT);
  digitalWrite(A23, LOW);
  pinMode(A24, OUTPUT);
  digitalWrite(A24, LOW);
  pinMode(OE1, OUTPUT);
  digitalWrite(OE1, HIGH);
  pinMode(OE2, OUTPUT); 
  digitalWrite(OE2, HIGH);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  Serial.println("All LED's should be Off");
  delay(1000);
}

void setInput(int inputNum, int inputVal){
  switch(inputNum){
    case 1:
      if (inputVal == 1){
        digitalWrite(A11, HIGH);
        Serial.println("A11,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A11, LOW); 
        Serial.println("A11,LOW");
      }
      break;
    case 2:
      if (inputVal == 1){
        digitalWrite(A12, HIGH);
        Serial.println("A12,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A12, LOW); 
        Serial.println("A12,LOW");
      }
      break;
    case 3:
      if (inputVal == 1){
        digitalWrite(A13, HIGH);
        Serial.println("A13,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A13, LOW);
        Serial.println("A13,LOW");
      }
      break;
    case 4:
      if (inputVal == 1){
        digitalWrite(A14, HIGH);
        Serial.println("A14,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A14, LOW); 
        Serial.println("A14,LOW");
      }        
      break;
    case 5:
      if (inputVal == 1){
        digitalWrite(A21, HIGH);
        Serial.println("A21,HIGH");
      }       
      if (inputVal == 0){
        digitalWrite(A21, LOW); 
        Serial.println("A21,LOW");
      }        
      break;
    case 6:
      if (inputVal == 1){
        digitalWrite(A22, HIGH);
        Serial.println("A22,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(A22, LOW); 
        Serial.println("A22,LOW");
      }        
      break;
    case 7:
      if (inputVal == 1){
        digitalWrite(A23, HIGH);
        Serial.println("A23,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(A23, LOW); 
        Serial.println("A23,LOW");
      }        
      break;
    case 8:
      if (inputVal == 1){
        digitalWrite(A24, HIGH);
        Serial.println("A24,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(A24, LOW); 
        Serial.println("A24,LOW");
      }        
      break;
    default:
      Serial.println("Incorrect Input");
      break;
  }
}

void toggleAllOn(){
  for (int i=0; i < 8; i++){
    setInput(i+1, 1);
  }
}
void toggleAllOff(){
  for (int i=0; i < 8; i++){
    setInput(i+1, 0);
  }
}

void toggleEven(){
  Serial.println("Toggle Even");
  for (int i=0; i < 8; i++){
    if (i % 2 == 0){
      setInput(i+1, 1);
    } else {
      setInput(i+1, 0);
    }
  }
}

void toggleOdd(){
  Serial.println("Toggle Odd");
  for (int i=0; i < 8; i++){
    if (i % 2 == 1){
      setInput(i+1, 1);
    } else {
      setInput(i+1, 0);
    }
  }
}

void loop() {
  Serial.println("Cycle Start");
  digitalWrite(OE1, LOW);
  digitalWrite(OE2, LOW);
  toggleAllOn();
  delay(3000);
  toggleAllOff();
  delay(3000);
  toggleOdd();
  delay(3000);
  toggleAllOff();
  delay(3000);
  toggleEven();
  delay(3000);
  toggleAllOff();
  delay(3000);
  digitalWrite(OE1, HIGH);
  digitalWrite(OE2, HIGH);
  toggleAllOn();
  Serial.println("All OFF, due to OE");
  delay(3000);
  
  Serial.println("Cycle Complete");
}
