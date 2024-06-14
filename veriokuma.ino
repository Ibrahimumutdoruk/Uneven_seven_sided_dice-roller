const int numInputs = 13; 
const int inputPins[numInputs] = {0,2,3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; 
void setup() {
  // Giriş pinlerini ayarla
  for (int i = 0; i < numInputs; i++) {
    pinMode(inputPins[i], INPUT);
  }
  Serial.begin(1000000);
}

void loop() {
// Read and send the states of each digital input pin
  for (int i = 0; i < numInputs; i++) {
    int state = digitalRead(inputPins[i]); // Read the state of the current input pin
    Serial.print(state); // Send the state to the serial port
    if(i<numInputs-1){
      Serial.print(",");
    }
  }
    Serial.println();
    delayMicroseconds(400);
}