#define CLR 2
#define D1 3
#define D2 4
#define D3 5
#define CLK 6
#define D4 7
#define D5 8
#define D6 9

long milliDelay = 500;



void setup() {
  // put your setup code here, to run once:
  pinMode(CLR, OUTPUT);
  digitalWrite(CLR, HIGH);
  pinMode(CLK, OUTPUT);
  digitalWrite(CLK,LOW);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);  
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW); 
  digitalWrite(CLK, HIGH);
  delay(50);
  digitalWrite(CLK, LOW); 
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  Serial.println("All LED's should be Off");
  delay(1000);
}

void setInput(int inputNum, int inputVal){
  switch(inputNum){
    case 1:
      if (inputVal == 1){
        digitalWrite(D1, HIGH);
        Serial.println("D1,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(D1, LOW); 
        Serial.println("D1,LOW");
      }
      break;
    case 2:
      if (inputVal == 1){
        digitalWrite(D2, HIGH);
        Serial.println("D2,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(D2, LOW); 
        Serial.println("D2,LOW");
      }
      break;
    case 3:
      if (inputVal == 1){
        digitalWrite(D3, HIGH);
        Serial.println("D3,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(D3, LOW);
        Serial.println("D3,LOW");
      }
      break;
    case 4:
      if (inputVal == 1){
        digitalWrite(D4, HIGH);
        Serial.println("D4,HIGH");
      }
      if (inputVal == 0){
        digitalWrite(D4, LOW); 
        Serial.println("D4,LOW");
      }        
      break;
    case 5:
      if (inputVal == 1){
        digitalWrite(D5, HIGH);
        Serial.println("D5,HIGH");
      }       
      if (inputVal == 0){
        digitalWrite(D5, LOW); 
        Serial.println("D5,LOW");
      }        
      break;
    case 6:
      if (inputVal == 1){
        digitalWrite(D6, HIGH);
        Serial.println("D6,HIGH");
      }        
      if (inputVal == 0){
        digitalWrite(D6, LOW); 
        Serial.println("D6,LOW");
      }        
      break;
    default:
      Serial.println("Incorrect Input");
      break;
  }
}

void toggleAllOn(){
  for (int i=0; i < 6; i++){
    setInput(i+1, 1);
  }
  digitalWrite(CLK, HIGH);
  digitalWrite(CLK, LOW);
}
void toggleAllOff(){
  for (int i=0; i < 6; i++){
    setInput(i+1, 0);
  }
  digitalWrite(CLK, HIGH);
  digitalWrite(CLK, LOW);
}

void clearAll(){
  digitalWrite(CLR, LOW);
  digitalWrite(CLK, LOW);
  digitalWrite(CLK, HIGH);
  digitalWrite(CLR, HIGH);
  digitalWrite(CLK, LOW);
  Serial.println("ALL LED's LOW, CLEARED");
}

void toggleEven(){
  Serial.println("Toggle Even");
  for (int i=0; i < 6; i++){
    if (i % 2 == 0){
      setInput(i+1, 1);
    } else {
      setInput(i+1, 0);
    }
  }
  digitalWrite(CLK, HIGH);  
  digitalWrite(CLK,LOW);
}

void toggleOdd(){
  Serial.println("Toggle Odd");
  for (int i=0; i < 6; i++){
    if (i % 2 == 1){
      setInput(i+1, 1);
    } else {
      setInput(i+1, 0);
    }
  }
  digitalWrite(CLK, HIGH);  
  digitalWrite(CLK, LOW);
}

void loop() {
  Serial.println("Cycle Start");
  toggleAllOn();
  delay(3000);
  toggleAllOff();
  delay(3000);
  toggleOdd();
  delay(3000);
  clearAll();
  delay(3000);
  toggleEven();
  delay(3000);
  clearAll();
  delay(3000);
  Serial.println("Cycle Complete");
}
