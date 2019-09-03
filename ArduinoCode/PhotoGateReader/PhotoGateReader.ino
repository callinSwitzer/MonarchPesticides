// set the number of analog pins you want to use
int numReadings = 6;


// select the input pins
int sensorPins[6] = {A0, A1, A2, A3, A4, A5};

// variables for analog reads
int analogData[6];

int val;

void setup() {
  Serial.begin(19200); 
  Serial.println(" Setup complete");
}

void loop() {
  val = Serial.read();
  if (val == 114) { // 114 == "r"
      // read the value from the sensor:
      for (int i = 0; i < numReadings; i++) {
        analogData[i] =  analogRead(sensorPins[i]);
        Serial.print(analogData[i]);
        // add comma 
        if (i < (numReadings-1)) {
             Serial.print(",");
        }
      }
      Serial.print("\n");
      //Serial.flush();
  }
}
