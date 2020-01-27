#define RESET1 2
#define DATA1 3
#define CLK1 4
#define SET1 5
#define SET2 6
#define CLK2 7
#define DATA2 8
#define RESET2 9

void setup() {
  // put your setup code here, to run once:
  pinMode(RESET1, OUTPUT);
  pinMode(DATA1, OUTPUT);
  pinMode(CLK1, OUTPUT);
  pinMode(SET1, OUTPUT);
  pinMode(SET2, OUTPUT);
  pinMode(CLK2, OUTPUT);
  pinMode(DATA2, OUTPUT);
  pinMode(RESET2, OUTPUT);
  Serial.begin(9600);
  Serial.println("BEGIN TEST");
  delay(5000);
}

void loop() {
  Serial.println("Cycle Start");
  delay(2000);
  Serial.println("Truth Table Line 1-Group 1, SET=L, RESET=H CP=X, D=X, LED1=ON, LED2 = OFF");
  digitalWrite(SET1, LOW);
  digitalWrite(RESET1, HIGH);
  Serial.println("Truth Table Line 1-Group 1, done LED1 = 0n, LED2 = OFF");
  delay(2000);
  Serial.println("Truth Table Line 2-Group 1, SET=H, RESET=L CP=X, D=X, LED1=ON, LED2 = OFF");
  digitalWrite(SET1, HIGH);
  digitalWrite(RESET1, LOW);
  Serial.println("Truth Table Line 2-Group 1, done LED1 = Off, LED2 = On");
  delay(2000);
  Serial.println("Truth Table Line 3-Group 1, SET=L, RESET=L CP=X, D=X, LED1=ON, LED2 = On");
  digitalWrite(SET1, LOW);
  digitalWrite(RESET1, LOW);
  Serial.println("Truth Table Line 3-Group 1, done LED1/LED2 unstable");
  delay(2000);
  Serial.println("Truth Table Line 4-Group 1, SET=H, RESET=H CP=H, D=H, LED1=ON, LED2=Off");
  digitalWrite(SET1, HIGH);
  digitalWrite(RESET1, HIGH);
  digitalWrite(DATA1, HIGH);
  digitalWrite(CLK1, HIGH);
  Serial.println("Truth Table Line 4-Group 1, done LED1=On, LED2=Off. happens on rising edge of clock pin");
  delay(2000);
  Serial.println("Truth Table Line 5-Group 1, SET=H, RESET=H CP=H, D=L, LED1=Off, LED2=On");
  digitalWrite(SET1, HIGH);
  digitalWrite(RESET1, HIGH);
  digitalWrite(DATA1, LOW);
  digitalWrite(CLK1, HIGH);
  Serial.println("Truth Table Line 5-Group 1, done LED1=Off, LED2=On. happens on rising edge of clock pin");
  delay(2000);
  Serial.println("Truth Table Line 6-Group 1, SET=H, RESET=H CP=L, D=X, LED1 = last ouput LED2 = last output");
  digitalWrite(SET1, HIGH);
  digitalWrite(RESET1, HIGH);
  digitalWrite(CLK1, LOW);
  Serial.println("Truth Table Line 6-Group 1, done LEDx = last output.");
  delay(2000);


  Serial.println("Truth Table Line 1-Group 2, SET=L, RESET=H CP=X, D=X, LED1=ON, LED2 = OFF");
  digitalWrite(SET2, LOW);
  digitalWrite(RESET2, HIGH);
  Serial.println("Truth Table Line 1-Group 2, done LED1 = 0n, LED2 = OFF");
  delay(2000);
  Serial.println("Truth Table Line 2-Group 2, SET=H, RESET=L CP=X, D=X, LED1=ON, LED2 = OFF");
  digitalWrite(SET2, HIGH);
  digitalWrite(RESET2, LOW);
  Serial.println("Truth Table Line 2-Group 2, done LED1 = Off, LED2 = On");
  delay(2000);
  Serial.println("Truth Table Line 3-Group 2, SET=L, RESET=L CP=X, D=X, LED1=ON, LED2 = On");
  digitalWrite(SET2, LOW);
  digitalWrite(RESET2, LOW);
  Serial.println("Truth Table Line 3-Group 2, done LED1/LED2 unstable");
  delay(2000);
  Serial.println("Truth Table Line 4-Group 2, SET=H, RESET=H CP=H, D=H, LED1=ON, LED2=Off");
  digitalWrite(SET2, HIGH);
  digitalWrite(RESET2, HIGH);
  digitalWrite(DATA2, HIGH);
  digitalWrite(CLK2, HIGH);
  Serial.println("Truth Table Line 4-Group 2, done LED1=On, LED2=Off. happens on rising edge of clock pin");
  delay(2000);
  Serial.println("Truth Table Line 5-Group 2, SET=H, RESET=H CP=H, D=L, LED1=Off, LED2=On");
  digitalWrite(SET2, HIGH);
  digitalWrite(RESET2, HIGH);
  digitalWrite(DATA2, LOW);
  digitalWrite(CLK2, HIGH);
  Serial.println("Truth Table Line 5-Group 2, done LED1=Off, LED2=On. happens on rising edge of clock pin");
  delay(2000);
  Serial.println("Truth Table Line 6-Group 2, SET=H, RESET=H CP=L, D=X, LED1 = last ouput LED2 = last output");
  digitalWrite(SET2, HIGH);
  digitalWrite(RESET2, HIGH);
  digitalWrite(CLK2, LOW);
  Serial.println("Truth Table Line 6-Group 2, done LEDx = last output.");
  delay(2000);

  
  Serial.println("Cycle Complete");
}
