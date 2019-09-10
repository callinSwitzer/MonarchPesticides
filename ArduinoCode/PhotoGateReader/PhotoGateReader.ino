
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

// define sampling interval
long interval = 20000L; //microseconds. 
// for example: 10,0000 microseconds = 10 milliseconds. This corresponds to 100 Hz


void setup() {
  Serial.begin(115200); 
  Serial.println(" Setup complete");
}

void loop() {
  current_time = micros();
  
  if (Serial.available() > 0){
    val = Serial.read();
  }
 
  if (current_time - previous_time >= interval){
    if (val == 114){ // 114 = "r"
      time_diff = current_time - previous_time;

      // read all sensors
      for (int i = 0; i < numReadings; i++) {
        analogData[i] =  analogRead(sensorPins[i]);
        Serial.print(analogData[i]);
        Serial.print(","); 
      }
        // update time immediately after analog
        // data have been sent
        previous_time = current_time;

        // print time diff in microseconds between readings
        Serial.print(time_diff);      
        Serial.print("\n");
      
        Serial.flush();
        
        // empty buffer
        while (!(UCSR0A & (1 << UDRE0)))  // Wait for empty transmit buffer
              UCSR0A |= 1 << TXC0;  // mark transmission not complete
        while (!(UCSR0A & (1 << TXC0)));   // Wait for the transmission to complete

    }
  }   
}
 
