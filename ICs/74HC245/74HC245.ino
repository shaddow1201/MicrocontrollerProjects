#define DIR 2
#define A1 3
#define A2 4
#define A3 5
#define A4 6
#define A5 7
#define A6 8
#define A7 9
#define A8 10
#define OE 11

long milliDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(DIR, OUTPUT);
  digitalWrite(DIR, HIGH);
  pinMode(A1, OUTPUT);
  digitalWrite(A1, LOW);
  pinMode(A2, OUTPUT);
  digitalWrite(A2, LOW);
  pinMode(A3, OUTPUT);
  digitalWrite(A3, LOW);
  pinMode(A4, OUTPUT);
  digitalWrite(A4, LOW);
  pinMode(A5, OUTPUT);
  digitalWrite(A5, LOW);
  pinMode(A6, OUTPUT);
  digitalWrite(A6, LOW);
  pinMode(A7, OUTPUT);
  digitalWrite(A7, LOW);
  pinMode(A8, OUTPUT);
  digitalWrite(A8, LOW);
  pinMode(OE, OUTPUT);
  digitalWrite(OE, HIGH);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  Serial.println("All LED's should be Off");
  delay(1000);
  digitalWrite(OE, LOW);
}

void setInput(int inputNum, int inputVal){
  switch(inputNum){
    case 1:
      if (inputVal == 1){
        digitalWrite(A1, HIGH);
        Serial.println("A1,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A1, LOW); 
        Serial.println("A1,LOW");
      }
      break;
    case 2:
      if (inputVal == 1){
        digitalWrite(A2, HIGH);
        Serial.println("A2,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A2, LOW); 
        Serial.println("A2,LOW");
      }
      break;
    case 3:
      if (inputVal == 1){
        digitalWrite(A3, HIGH);
        Serial.println("A3,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A3, LOW);
        Serial.println("A3,LOW");
      }
      break;
    case 4:
      if (inputVal == 1){
        digitalWrite(A4, HIGH);
        Serial.println("A4,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(A4, LOW); 
        Serial.println("A4,LOW");
      }        
      break;
    case 5:
      if (inputVal == 1){
        digitalWrite(A5, HIGH);
        Serial.println("A5,HIGH");
      }       
      if (inputVal == 0){
        digitalWrite(A5, LOW); 
        Serial.println("A5,LOW");
      }        
      break;
    case 6:
      if (inputVal == 1){
        digitalWrite(A6, HIGH);
        Serial.println("A6,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(A6, LOW); 
        Serial.println("A6,LOW");
      }        
      break;
    case 7:
      if (inputVal == 1){
        digitalWrite(A7, HIGH);
        Serial.println("A7,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(A7, LOW); 
        Serial.println("A7,LOW");
      }        
      break;
    case 8:
      if (inputVal == 1){
        digitalWrite(A8, HIGH);
        Serial.println("A8,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(A8, LOW); 
        Serial.println("A8,LOW");
      }        
      break;
    default:
      Serial.println("Incorrect Input");
      break;
  }
}

void toggleAllOn(){
  Serial.println("Toggle All On");
  for (int i=0; i < 8; i++){
    setInput(i+1, 1);
  }
}
void toggleAllOff(){
  Serial.println("Toggle All Off");
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
  digitalWrite(OE, LOW);
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
  digitalWrite(OE, HIGH);
  toggleAllOn();
  Serial.println("All OFF, due to OE");
  delay(3000);
  
  Serial.println("Cycle Complete");
}
