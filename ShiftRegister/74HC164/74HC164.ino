#define DATA_PIN 2
#define CLK_PIN 3
int activeLEDPin; // ActiveLEDPin
long onTime;      // milliseconds of on-time

byte dataArray[9]; // array  to handle the 74595 chip states

void LedArrayRoll(){
  for (int i=0; i < 9; i++){
    shiftOut(DATA_PIN, CLK_PIN, MSBFIRST, dataArray[i]);
    delay(100);
  }
  shiftOut(DATA_PIN, CLK_PIN, MSBFIRST, dataArray[0]);
  delay(100);
}

void setup() 
{ 
  dataArray[0] = 0x00; //0b00000000 # All Off (sent twice shuts all off
  dataArray[1] = 0x01; //0b00000001 # Position 1 of chip on 
  dataArray[2] = 0x02; //0b00000010 # Position 2 of chip on 
  dataArray[3] = 0x04; //0b00000100 # Position 3 of chip on 
  dataArray[4] = 0x08; //0b00001000 # Position 4 of chip on 
  dataArray[5] = 0x10; //0b00010000 # Position 5 of chip on 
  dataArray[6] = 0x20; //0b00100000 # Position 6 of chip on 
  dataArray[7] = 0x40; //0b01000000 # Position 7 of chip on 
  dataArray[8] = 0x80; //0b10000000 # Position 8 of chip on 
  pinMode(CLK_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);
  Serial.begin(115200);
  for (int i=0; i < 10; i++){
    LedArrayRoll();
  }
} 
 
void loop() 
{
  String incomingString;
  if (Serial.available()){
    incomingString = Serial.readString(); // read the incoming data as string:
    int tildeIndex = incomingString.indexOf('~');
    int strLen = incomingString.length();
    String zoneStr = incomingString.substring(0,tildeIndex);
    String secToRunStr = incomingString.substring(tildeIndex+1, strLen);
    int zone = zoneStr.toInt();
    int secToRun = secToRunStr.toInt();
    Serial.print(" zone:");
    Serial.print(zoneStr);
    Serial.print(" secToRun:");
    Serial.println(secToRunStr);
    shiftOut(DATA_PIN, CLK_PIN, MSBFIRST, dataArray[0]);
    shiftOut(DATA_PIN, CLK_PIN, MSBFIRST, dataArray[zone]);
    delay(secToRun * 1000);
    shiftOut(DATA_PIN, CLK_PIN, MSBFIRST, dataArray[0]);
    
    //relayDriver.Update(zone, secToRun);
  } //else {
    //relayDriver.Update();
  //}
  
}
