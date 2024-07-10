#include "Wire.h"
#define SDA 19
#define SCL 20

#define PCA9538_ADDR 0x73

#define PCA9538_INPUT_REG 0x00
#define PCA9538_CONFIG_REG 0x03

#define GPIO1 0x01
#define GPIO2 0x02
#define GPIO3 0x04
#define GPIO4 0x08

#define NUM_INPUT_PINS 4

void setPinMode(uint8_t pin, uint8_t mode) {
  uint8_t config = readRegister(PCA9538_CONFIG_REG);
  if (mode == INPUT) {
     config |= pin;
   } else {
     config &= ~pin;
   }
   writeRegister(PCA9538_CONFIG_REG, config);
}

uint8_t readInput() {
   return readRegister(PCA9538_INPUT_REG);
}

uint8_t readRegister(uint8_t reg) {
  Wire.beginTransmission(PCA9538_ADDR);
  Wire.write(reg);
  Wire.endTransmission(false);
  Wire.requestFrom(PCA9538_ADDR, 1);
  return Wire.read();
}

void writeRegister(uint8_t reg, uint8_t value) {
  Wire.beginTransmission(PCA9538_ADDR);
  Wire.write(reg);
  Wire.write(value);
  Wire.endTransmission();
}

void setup() {
  Serial.begin(9600);
  Wire.begin(SDA, SCL);
  setPinMode(GPIO1, INPUT);
  setPinMode(GPIO2, INPUT);
  setPinMode(GPIO3, INPUT);
  setPinMode(GPIO4, INPUT);
}

void loop() {
  uint8_t input = readInput();
  bool inputValues[NUM_INPUT_PINS];
  for (int i = 0; i < NUM_INPUT_PINS; i++) {
     inputValues[i] = bitRead(input, i);
     Serial.print( inputValues[i]);
  }
  Serial.println("");
  delay(1000);  // Add a delay to avoid flooding the serial output
}
