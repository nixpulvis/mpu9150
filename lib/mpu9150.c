#include "mpu9150.h"

byte mpu9150_get_device_id() {
    byte buffer;
    i2c_read_register(0x68, 0x75, &buffer, 1);
    return buffer;
}