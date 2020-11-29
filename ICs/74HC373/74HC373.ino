#define OE 2
#define D1 3
#define D2 4
#define D3 5
#define D4 6
#define LE 7
#define D5 8
#define D6 9
#define D7 10
#define D8 11

long milliDelay = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(OE, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(LE, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  digitalWrite(OE, LOW);
  delay(1000);
  digitalWrite(LE, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(D2, LOW);
  digitalWrite(D3, LOW);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D6, LOW);
  digitalWrite(D7, LOW);
  digitalWrite(D8, LOW);
  digitalWrite(LE, LOW);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  Serial.println("All LED's should be Off");
  delay(1000);
}

void setInput(int inputNum, int inputVal){
  switch(inputNum){
    case 0:
      if (inputVal == 1){
        digitalWrite(D1, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D1, LOW); 
      }
      break;
    case 1:
      if (inputVal == 1){
        digitalWrite(D2, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D2, LOW); 
      }
      break;
    case 2:
      if (inputVal == 1){
        digitalWrite(D3, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D3, LOW);
      }
      break;
    case 3:
      if (inputVal == 1){
        digitalWrite(D4, HIGH);
      }
      if (inputVal == 0){
        digitalWrite(D4, LOW); 
      }        
      break;
    case 4:
      if (inputVal == 1){
        digitalWrite(D5, HIGH);
      }       
      if (inputVal == 0){
        digitalWrite(D5, LOW); 
      }        
      break;
    case 5:
      if (inputVal == 1){
        digitalWrite(D6, HIGH);
      }        
      if (inputVal == 0){
        digitalWrite(D6, LOW); 
      }        
      break;
    case 6:
      if (inputVal == 1){
        digitalWrite(D7, HIGH);
      }        
      if (inputVal == 0){
        digitalWrite(D7, LOW); 
      }        
      break;
    case 7:
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
  digitalWrite(LE, HIGH);
  for (int i=0; i < 8; i++){
    setInput(i, 1);
  }
  delay(500);
  digitalWrite(LE, LOW);
}
void toggleAllOff(){
  Serial.println("Toggle All Off");
  digitalWrite(LE, HIGH);
  for (int i=0; i < 8; i++){
    setInput(i, 0);
  }
  digitalWrite(LE, LOW);
}

void toggleEven(){
  Serial.println("Toggle Even");
  digitalWrite(LE, HIGH);
  for (int i=0; i < 8; i++){
    if (i % 2 == 0){
      setInput(i, 1);
    } else {
      setInput(i, 0);
    }
  }
  delay(500);
  digitalWrite(LE, LOW);
}

void toggleOdd(){
  Serial.println("Toggle Odd");
  digitalWrite(LE, HIGH);
  for (int i=0; i < 8; i++){
    if (i % 2 == 1){
      setInput(i, 1);
    } else {
      setInput(i, 0);
    }
  }
  delay(500);
  digitalWrite(LE, LOW);
}

void toggleOneAtATime(){
  Serial.println("Toggle Each");
  digitalWrite(LE, HIGH);
  delay(500);
  for (int i=0; i < 8; i++){
    setInput(i, 1);
    delay(500);
  }
  digitalWrite(LE, LOW);  
}

void loop() {
  Serial.println("Cycle Start");
  toggleAllOff();
  toggleAllOn();
  delay(3000);
  toggleAllOff();
  toggleOdd();
  delay(3000);
  toggleAllOff();
  toggleEven();
  delay(3000);
  toggleAllOff();
  toggleOneAtATime();
  delay(3000);
  toggleAllOff();
  delay(1000);
  Serial.println("Cycle Complete");
}
