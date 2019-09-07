
// set the number of analog pins you want to use
int numReadings = 6;


// select the input pins
int sensorPins[6] = {A0, A1, A2, A3, A4, A5};

long current_time = 0L;
long previous_time = 0L;

// variables for analog reads
int analogData[6];

int val;
long time_diff; 

long interval = 50000L; //microseconds. 10K microseconds (10 ms) = 100 Hz


void setup() {
  Serial.begin(115200); 
  Serial.println(" Setup complete");
}

void loop() {
  current_time = micros();
  if (Serial.available()>0 && current_time - previous_time >= interval){
    val = Serial.read();
    if (val == 114){

      time_diff = current_time - previous_time;
      Serial.println(time_diff);
      previous_time = current_time;
      delay(10);
    }
  }
    
}
 
