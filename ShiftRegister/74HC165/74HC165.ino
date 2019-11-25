#define SO 2
#define SH_LD 3
#define CLK 4

int i=0;
int PinState = 0;
int Parallel_data = 0;

void setup() 
{ 
  pinMode(SH_LD, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(SO, INPUT);
  Serial.begin(9600);
} 
 
void loop() 
{
  digitalWrite(CLK,LOW);
  /*******************  INHIBIT SECTION START HERE  *****************/
  /*Parallel data that will be entered through D0 - D7 Pins of 74165  **/
  digitalWrite(SH_LD,LOW);
  delay(5);
  // stores the d0-d7 pins parallel data
  digitalWrite(SH_LD,HIGH);  
 /*******************  INHIBIT SECTION ENDS HERE ******************/
 //Read 8-bit data from 74HC165
  Serial.print("Parallel Data:");
  for(i=0;i<8;i++)
  {
    PinState = digitalRead(SO);// read the state of the SO:
    digitalWrite(CLK, LOW);
    delay(1);
    digitalWrite(CLK, HIGH);
    delay(1);
    Serial.print(PinState); //Send out one by one parallel data to serial monitor 
    Parallel_data = (Parallel_data<<1)|PinState; //Store the value in Parallel_data
  }
  Serial.println();
  delay(1000);
}
