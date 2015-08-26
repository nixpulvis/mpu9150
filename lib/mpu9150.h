#ifndef __MPU9150_H__
#define __MPU9150_H__

#include <avrm.h>
#include <avrm/i2c.h>

#define SELF_TEST_X   0x0D
#define SELF_TEST_Y   0x0E
#define SELF_TEST_Z   0x0F
#define SELF_TEST_A   0x10
#define SMPLRT_DIV    0x19
#define CONFIG        0x1A
#define GYRO_CONFIG   0x1B
#define ACCEL_CONFIG  0x1C
#define FF_THR        0x1D
#define FF_DUR        0x1E
#define MOT_THR       0x1F
#define MOT_DUR       0x20
#define ZRMOT_THR     0x21
#define ZRMOT_DUR     0x22
#define FIFO_EN       0x23
#define I2C_MST_CTRL  0x24
#define I2C_SLV0_ADDR 0x25
#define I2C_SLV0_REG  0x26
#define I2C_SLV0_CTRL 0x27
#define I2C_SLV1_ADDR 0x28
#define I2C_SLV1_REG  0x29
#define I2C_SLV1_CTRL 0x2A
#define I2C_SLV2_ADDR 0x2B
#define I2C_SLV2_REG  0x2C
#define I2C_SLV2_CTRL 0x2D
#define I2C_SLV3_ADDR 0x2E
#define I2C_SLV3_REG  0x2F
#define I2C_SLV3_CTRL 0x30
#define I2C_SLV4_ADDR 0x31
#define I2C_SLV4_REG  0x32
#define I2C_SLV4_DO   0x33
#define I2C_SLV4_CTRL 0x34
#define I2C_SLV4_DI   0x35

// #define I2C_MST_STATUS
// #define INT_PIN_CFG
// #define INT_LEVEL
// #define INT_ENABLE
// #define INT_STATUS
#define ACCEL_XOUT_H 0x3B
// #define ACCEL_XOUT_L
// #define ACCEL_YOUT_H
// #define ACCEL_YOUT_L
// #define ACCEL_ZOUT_H
// #define ACCEL_ZOUT_L
// #define TEMP_OUT_H
// #define TEMP_OUT_L
// #define GYRO_XOUT_H
// #define GYRO_XOUT_L
// #define GYRO_YOUT_H
// #define GYRO_YOUT_L
// #define GYRO_ZOUT_H
// #define GYRO_ZOUT_L
// #define EXT_SENS_DATA_00
// #define EXT_SENS_DATA_01
// #define EXT_SENS_DATA_02
// #define EXT_SENS_DATA_03
// #define EXT_SENS_DATA_04
// #define EXT_SENS_DATA_05
// #define EXT_SENS_DATA_06
// #define EXT_SENS_DATA_07
// #define EXT_SENS_DATA_08
// #define EXT_SENS_DATA_09
// #define EXT_SENS_DATA_10
// #define EXT_SENS_DATA_11
// #define EXT_SENS_DATA_12
// #define EXT_SENS_DATA_13
// #define EXT_SENS_DATA_14
// #define EXT_SENS_DATA_15
// #define EXT_SENS_DATA_16
// #define EXT_SENS_DATA_17
// #define EXT_SENS_DATA_18
// #define EXT_SENS_DATA_19
// #define EXT_SENS_DATA_20
// #define EXT_SENS_DATA_21
// #define EXT_SENS_DATA_22
// #define EXT_SENS_DATA_23
// #define MOT_DETECT_STAT
// #define I2C_SLV0_DO
// #define I2C_SLV1_DO
// #define I2C_SLV2_DO
// #define I2C_SLV3_DO
// #define I2C_MST_DELAY_CTRL
// #define SIGNAL_PATH_RESET
// #define MOT_DETECT_CTRL
// #define USER_CTRL
// #define PWR_MGMT_1
// #define PWR_MGMT_2
// #define FIFO_COUNTH
// #define FIFO_COUNTL
// #define FIFO_R_W
// #define WHO_AM_I

// i2c 400kHz

#endif
