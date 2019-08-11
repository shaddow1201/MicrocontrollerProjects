  unsigned long oldTime;
  unsigned long WaterPulseCount = 0;
  float calibrationFactor = 4.8;
  float liters = 0;
  float litersM =0;
  float gallonsM = 0;
  char gal_M[20];
  int WATER_SENSOR_PIN=2;

  void WaterPulseCounter(void)
  {
    // Increment the water pulse counter
    WaterPulseCount++;
  }
  void WaterSensorSetup(){
    pinMode(WATER_SENSOR_PIN, INPUT);
    attachInterrupt(WATER_SENSOR_PIN, WaterPulseCounter, FALLING) ;
    oldTime = millis();
  }
  void WaterSensorLoop(){
    unsigned long t;
    static unsigned int pc;
    t = (millis() - oldTime);
    if(t >= 1000)         // Only process counters once per second
    {
      //Read water sensor pulse count and process
      if (WaterPulseCount != 0) {
        detachInterrupt (WATER_SENSOR_PIN); // Disable water flow interrupt to read value
        //Calculate litres and adjust for 1 sec offset, if any
        liters = (WaterPulseCount / calibrationFactor) * t/1000; //= liters/minute
        gallonsM = liters * 0.264172;
        oldTime = millis();       // Reset base delay time
        pc = WaterPulseCount;
        WaterPulseCount = 0;      // Reset the water pulse counter
        attachInterrupt(2, WaterPulseCounter, FALLING);
        sprintf(gal_M, "%8.3f", gallonsM);
        Serial.print("WaterPulseCount= ");
        Serial.print(pc);
        Serial.print(", gallonsM= ");
        Serial.println(gal_M);
        pc=0;
      } else {
        Serial.print(WaterPulseCount);
        Serial.println("  Water is Off");   
        oldTime = millis();       // Reset base delay time
        WaterPulseCount = 0;      // Reset the water pulse counter
        //pc=0;
      }
    }
  }  

void setup()
{
  Serial.begin(9600);
  WaterSensorSetup();
}


void loop()
{
  WaterSensorLoop();
}

 
