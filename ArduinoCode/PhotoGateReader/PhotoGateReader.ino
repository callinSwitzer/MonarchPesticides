
// select the input pins
int sensorPin0 = A0;    
int sensorPin1 = A1;
int sensorPin2 = A2;

// variables for analog reads
int ar0; 
int ar1; 
int ar2; 

void setup() {

  Serial.begin(9600); 
}

void loop() {
  // read the value from the sensor:
  ar0 = analogRead(sensorPin0);
  ar1 = analogRead(sensorPin1);
  ar2 = analogRead(sensorPin2);
  Serial.print(ar0);
  Serial.print(",");
  Serial.print(ar1);
  Serial.print(",");
  Serial.print(ar2);
  Serial.print("\n");
}
