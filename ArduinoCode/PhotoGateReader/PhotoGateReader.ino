
// set the number of analog pins you want to use
int numReadings = 6;


// select the input pins
int sensorPins[6] = {A0, A1, A2, A3, A4, A5};

long current_time = 0L;
long previous_time = 0;

// variables for analog reads
int analogData[6];

int val;

long interval = 10000L; //microseconds. 10K microseconds (10 ms) = 100 Hz
long numBytes; 

int data_sent = 0;

void setup() {
  Serial.begin(115200); 
  Serial.println(" Setup complete");
}

void loop() {
    
    current_time = micros();

  if (Serial.available()  == 0 && data_sent == 0) {
    val = Serial.read();
    return;
  }
  else if (current_time - previous_time >= interval){
    data_sent = 1;
    Serial.println(current_time - previous_time);
    previous_time = current_time;
  }
  else data_sent = 1;
  


      
  
  }
 
