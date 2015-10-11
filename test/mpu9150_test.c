#include <avrm/uart.h>
#include <avrm/i2c.h>
#include <mpu9150.h>

int main(int argc, char const *argv[]) {
  // Setup the UART for serial communication.
  uart_init();

  delay_ms(20);

  // Setup the I2C bus for talking to the MPU9150.
  i2c_init(I2C_SCL_400KHZ);

  // Print the device ID.
  byte id = mpu9150_get_device_id();
  printf("ID: %x\n", id);

  return 0;
}
