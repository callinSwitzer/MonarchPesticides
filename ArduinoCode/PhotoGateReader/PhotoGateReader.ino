// set the number of analog pins you want to use
int numReadings = 2;


// select the input pins
int sensorPins[6] = {A0, A1, A2, A3, A4, A5};

// variables for analog reads
int analogData[6];

void setup() {

  Serial.begin(9600); 
}

void loop() {
  // read the value from the sensor:
  for (int i = 0; i < numReadings; i++) {
    //analogRead(sensorPins[i]);
    //delay(10); // delay for muxer
    analogData[i] =  analogRead(sensorPins[i]);
    Serial.print(analogData[i]);
    Serial.print(" ,");
  }
  Serial.print("\n");
}
