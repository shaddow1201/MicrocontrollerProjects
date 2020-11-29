#define CLR 2
#define D1 3
#define D2 4
#define D3 5
#define D4 6
#define CLK 7
#define D5 8
#define D6 9
#define D7 10
#define D8 11

long milliDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(CLR, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  digitalWrite(CLR, HIGH);
  delay(1000);
  //digitalWrite(CLR, LOW);
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
      }
      if (inputVal == 0){
        digitalWrite(D1, LOW); 
      }
      break;
    case 2:
      if (inputVal == 1){
        digitalWrite(D2, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D2, LOW); 
      }
      break;
    case 3:
      if (inputVal == 1){
        digitalWrite(D3, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D3, LOW);
      }
      break;
    case 4:
      if (inputVal == 1){
        digitalWrite(D4, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D4, LOW); 
      }        
      break;
    case 5:
      if (inputVal == 1){
        digitalWrite(D5, HIGH);
      }       
      if (inputVal == 0){
        digitalWrite(D5, LOW); 
      }        
      break;
    case 6:
      if (inputVal == 1){
        digitalWrite(D6, HIGH);
      }        
      if (inputVal == 0){
        digitalWrite(D6, LOW); 
      }        
      break;
    case 7:
      if (inputVal == 1){
        digitalWrite(D7, HIGH);
      }        
      if (inputVal == 0){
        digitalWrite(D7, LOW); 
      }        
      break;
    case 8:
      if (inputVal == 1){
        digitalWrite(D8, HIGH);
      }        
      if (inputVal == 0){
        digitalWrite(D8, LOW); 
      }        
      break;
    default:
      Serial.println("Incorrect Input");
      break;
  }
}

void toggleAllOn(){
  Serial.println("Toggle All On");
  digitalWrite(CLK, HIGH);
  for (int i=0; i < 8; i++){
    setInput(i+1, 1);
  }
  delay(500);
  digitalWrite(CLK, LOW);
}
void toggleAllOff(){
  Serial.println("Toggle All Off");
  digitalWrite(CLK, HIGH);
  for (int i=0; i < 8; i++){
    setInput(i+1, 0);
  }
  delay(500);
  digitalWrite(CLK, LOW);
}

void toggleEven(){
  Serial.println("Toggle Even");
  digitalWrite(CLK, HIGH);
  for (int i=0; i < 8; i++){
    if (i % 2 == 0){
      setInput(i+1, 1);
    } else {
      setInput(i+1, 0);
    }
  }
  delay(500);
  digitalWrite(CLK, LOW);
}

void toggleOdd(){
  Serial.println("Toggle Odd");
  digitalWrite(CLK, HIGH);
  for (int i=0; i < 8; i++){
    if (i % 2 == 1){
      setInput(i+1, 1);
    } else {
      setInput(i+1, 0);
    }
  }
  delay(500);
  digitalWrite(CLK, LOW);
}

void toggleOneAtATime(){
  Serial.println("Toggle Each");
  for (int i=0; i < 8; i++){
    digitalWrite(CLK, HIGH);
    setInput(i+1, 1);
    delay(500);
    digitalWrite(CLK, LOW);  
  }
  delay(500);
}

void loop() {
  Serial.println("Cycle Start");
  toggleAllOn();
  delay(3000);
  //clearAll();
  //delay(3000);
  toggleEven();
  delay(3000);
  //clearAll();
  //delay(3000);
  toggleOdd();
  delay(3000);
  toggleAllOff();
  delay(3000);
  toggleOneAtATime();
  delay(3000);
  toggleAllOff();
  delay(3000);
  Serial.println("Cycle Complete");
}
