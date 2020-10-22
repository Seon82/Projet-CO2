unsigned long time1, time2;

byte NDIR_PIN = 9;
 
unsigned long int NDIR_value;


long int NDIR_PPM;

void setup() {

    pinMode(NDIR_PIN, INPUT);
    Serial.begin(115200);
    time1=0;
    
}
 
void loop() {

  time2=millis();
  if ((time2-time1) > 60000)
  {
      time1=time2;
   
      NDIR_value = pulseIn(NDIR_PIN, HIGH);
  
      NDIR_PPM = NDIR_value/12.5;
      NDIR_PPM = NDIR_PPM*5;

      // Serial.print(NDIR_value);
      // Serial.print(",");
      Serial.println(NDIR_PPM);
  }  

}
