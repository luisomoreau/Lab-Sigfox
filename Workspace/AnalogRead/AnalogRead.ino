/*
 * Author: Louis Moreau: https://github.com/luisomoreau
 * Date: 2017/03/03
 * Description:
 * Read analog values from a sensor and display it on a console
*/

// the setup function runs once when you press reset or power the board
void setup() {
   Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  
  int sensorValue = analogRead(A0);
  Serial.print("light: ");
  Serial.println(sensorValue);

  int percentage = map(sensorValue, 0, 1023, 0, 100);
  
  Serial.print("light percentage: ");
  Serial.print(percentage);
  Serial.println(" % ");
  
  delay(1000);
}

