#include <Arduino.h>
// #include <HardwareSerial.h>
// #include <Wire.h>
// #include <SPI.h>

// put function declarations here:
int myFunction(int, int);

// HardwareSerial mySerial(1);

// arduino::UART my_uart1(0, 1);

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  // Serial1.begin(9600);
  Serial1.setRX(29);
  Serial1.setTX(12);
  Serial1.begin(1250000);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial1.print("XXXXXXXXXX\r\n");
  sleep_ms(2000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}