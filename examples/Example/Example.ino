#include "MPU6050.h"
const int MPU_addr = 0x68; // I2C address of the MPU-6050

int ax, ay, az, t, gx, gy, gz; // Variables to hold the data: Accelerometer, Temperature, Gyroscope


MPU6050 myAcc(MPU_addr);

void setup() {
  Serial.begin(115200);
  pinMode(4, OUTPUT);
  myAcc.init();
  delay(20);
}

void loop() {
   myAcc.getAcc(&ax, &ay, &az);
  // myAcc.getTemp(&t);
  // myAcc.getGyro(&gx, &gy, &gz);
  // myAcc.getAll(&ax, &ay, &az, &t, &gx, &gy, &gz); // Pass variables as reference

  Serial.print(ax); Serial.print(",");
  Serial.print(ay); Serial.print(",");
  Serial.println(az);
}
