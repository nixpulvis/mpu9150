#include "mpu9150.h"

uint16_t mpu9150_get_accel_x()
{
    byte buffer[2];
    i2c_read_register_bytes(0x68, 0x3B, buffer , 2);
    return buffer[0] << 8 | buffer[1];
}

void mpu9150_set_sleep(bool enabled)
{
  i2c_start(0x68, I2C_WRITE);
  i2c_write(0x6B);
  i2c_write(0x00);
  i2c_stop();
}

byte mpu9150_get_device_id() {
    return i2c_read_register_byte(0x68, 0x75);
}

byte mpu9150_get_magnetometer_id() {
    // I2Cdev::writeByte(devAddr, MPU6050_RA_INT_PIN_CFG, 0x02);
    return i2c_read_register_byte(0x0C, 0x02);
}
