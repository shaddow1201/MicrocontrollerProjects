class RelayDriver
{
  public: int zone;      // zoneID to turn on.
  public: bool isActive;
  private: long onTime;     // milliseconds of on-time
  // base byte array to send bytes from 
  private: byte dataArray[9]; // array  to handle the 74595 chip states
  // set pins for relay control
  private: int SER_Pin = 25;   //pin 14 on the 75HC595 data, pin 25 on the esp32
  private: int RCLK_Pin = 26;  //pin 12 on the 75HC595 latch, pin 26 on esp32
  private: int SRCLK_Pin = 27; //pin 11 on the 75HC595 clk, pin 27 on esp32
  // Timing variable
  unsigned long previousMillis;   // will store the last time the relays were updated.

  // Constructor - creates a RelayDriver and initializes the member variables and state
  public: RelayDriver(){
    dataArray[0] = 0x00; //0b00000000 # All Off (sent twice shuts all off
    dataArray[1] = 0x01; //0b00000001 # Position 1 of chip on 
    dataArray[2] = 0x02; //0b00000010 # Position 2 of chip on 
    dataArray[3] = 0x04; //0b00000100 # Position 3 of chip on 
    dataArray[4] = 0x08; //0b00001000 # Position 4 of chip on 
    dataArray[5] = 0x10; //0b00010000 # Position 5 of chip on 
    dataArray[6] = 0x20; //0b00100000 # Position 6 of chip on 
    dataArray[7] = 0x40; //0b01000000 # Position 7 of chip on 
    dataArray[8] = 0x80; //0b10000000 # Position 8 of chip on 
    previousMillis = 0;
    isActive = false;
    onTime = 0;
    // set pins.    
    pinMode(RCLK_Pin, OUTPUT);
    pinMode(SRCLK_Pin, OUTPUT);
    pinMode(SER_Pin, OUTPUT);
    // write initial state (All Off)
    digitalWrite(RCLK_Pin, 0);
    shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);
    shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);
    digitalWrite(RCLK_Pin, 1);
  }
  public: void Update()  // base update to turn everything OFF if running.
  {
    unsigned long currentMillis = millis();
    if (isActive){
      if(currentMillis - previousMillis >= onTime)
      {
        // write initial state (All Off)
        digitalWrite(RCLK_Pin, 0);
        shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);
        shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);
        digitalWrite(RCLK_Pin, 1);
        isActive=false;
      }
    } else {
      // shut all off always to be safe. (should be off)
      // keeps the 'static' at bay in circuit too, as it resets it often.
      digitalWrite(RCLK_Pin, 0);
      shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);
      shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);
      digitalWrite(RCLK_Pin, 1);
      isActive=false;
    }
  }
  public: void Update(int InZone, int InrunTimeSec) // this update changes the state, and sets timers
  {
    // zone is 2 parts, chip 2 gets sent first.
    // example: all off send 0,0 twice
    // example: position 1, send 0, 1 
    // example: position 9, send 1, 0
    unsigned long currentMillis = millis();
    if (isActive){ 
      // do nothing, as it's already running.
    } else {
      // is off, turn on and set vals.
      onTime = InrunTimeSec * 1000; 
      previousMillis = currentMillis;
      zone = InZone;
      digitalWrite(RCLK_Pin, 0);
      if (zone <= 8){ // lower set
        shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);         // shift second bit out as zeros/OFF
        shiftOut(SER_Pin, SRCLK_Pin, dataArray[zone]);      // shift out zone we want on
      } else { // upper set
        int relayPos = zone - 8;
        shiftOut(SER_Pin, SRCLK_Pin, dataArray[relayPos]);  // shift out zone we want on
        shiftOut(SER_Pin, SRCLK_Pin, dataArray[0]);         // shift second bit out as zeros/OFF
      }
      digitalWrite(RCLK_Pin, 1);
      isActive=true;
    }
}
  // this does the changing of the 74595 chips.
  void shiftOut(int myDataPin, int myClockPin, byte myDataOut) {
      //internal function setup
    int i=0;
    int pinState;

    //clear everything out just in case to
    //prepare shift register for bit shifting
    digitalWrite(myDataPin, 0);
    digitalWrite(myClockPin, 0);

    //cycle down through byte
    for (i=7; i>=0; i--)  {
      digitalWrite(myClockPin, 0);
      //if the value passed to myDataOut and a bitmask result 
      // true then set pinState to 1.
      if ( myDataOut & (1<<i) ) {
        pinState= 1;
      }
      else {  
        pinState= 0;
      }
      //Sets the pin to HIGH or LOW depending on pinState
      digitalWrite(myDataPin, pinState);
      //register shifts bits on upstroke of clock pin  
      digitalWrite(myClockPin, 1);
      //zero the data pin after shift to prevent bleed through
      digitalWrite(myDataPin, 0);
    }
    //stop shifting
    digitalWrite(myClockPin, 0);
}
};
 
RelayDriver relayDriver;

void setup() 
{ 
  Serial.begin(115200);
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
    relayDriver.Update(zone, secToRun);
  } else {
    relayDriver.Update();
  }
}
