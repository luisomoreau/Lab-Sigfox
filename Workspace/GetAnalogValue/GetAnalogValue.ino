/*
  ReadAnalogValue
  Reads an analog input on pin 0, converts it to voltage and percentage, and prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)

  This example code is in the public domain.
  */

int sensorPin = A0;
int sensorValue = 0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);

}

// the loop routine runs over and over again forever:
void loop() {

}
