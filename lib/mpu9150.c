#include "mpu9150.h"

byte mpu9150_get_device_id() {
    return i2c_read_register_byte(0x68, 0x75);
}