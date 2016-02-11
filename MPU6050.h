#ifndef MPU6050_h
#define MPU6050_h
#include <arduino.h>
#include <Wire.h>

class MPU6050 {
  public:
    MPU6050(void);
    MPU6050(const int);

    void init(void);
    void getAcc(int *, int *, int *);
    void getTemp(int *);
    void getGyro(int *, int *, int *);
    void getAll(int *, int *, int *, int *, int *, int *, int *);
    // void init(const int);

  private:
    int _MPU_addr = 0x68;
};
#endif
