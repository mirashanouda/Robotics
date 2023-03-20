#include <MPU9250.h>
#include <Wire.h>

MPU9250 IMU(Wire, 0x68);

void setup() {
  Serial.begin(9600); 
  IMU.begin();
}

// the loop function runs over and over again forever
void loop() {
  Serial.print("Accelerometer X axis: ");
  Serial.print(IMU.getAcce1X_mss(), 3);
  delay(2000);
}
