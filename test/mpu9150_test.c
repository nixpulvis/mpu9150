#include <avrm/uart.h>
#include <avrm/i2c.h>
#include <mpu9150.h>

int main(int argc, char const *argv[]) {
  // Setup the UART for serial communication.
  uart_init();

  delay_ms(20);

  // Setup the I2C bus for talking to the MPU9150.
  i2c_init(I2C_SCL_400KHZ);

  byte data;

  // Write
  i2c_start(0x68, I2C_WRITE);
  i2c_write(FIFO_EN);
  i2c_write(0xFF);
  i2c_stop();

  printf("Write\n");

  // Read
  i2c_start(0x68, I2C_WRITE);
  i2c_write(FIFO_EN);
  i2c_start(0x68, I2C_READ);
  data = i2c_read_ack();
  i2c_stop();

  printf("Read\n");
  printf("%x\n", data);

  // for (;;)
  // {
  //   i2c_start(0x68, I2C_WRITE);
  //   a = i2c_read_ack();
  //   i2c_write(ACCEL_XOUT_H);
  //   b = i2c_read_ack();
  //   i2c_start(0x68, I2C_READ);
  //   c = i2c_read_ack();
  //   i2c_stop();
  //
  //   printf("%x\n", a);
  //   printf("%x\n", b);
  //   printf("%x\n", c);
  //
  //   delay_ms(500);
  // }

  return 0;
}
