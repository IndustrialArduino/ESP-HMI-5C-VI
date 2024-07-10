#include <Wire.h>
#include <Adafruit_ADS1X15.h>

// Define the I2C address for the ADS1115
#define ADS1115_ADDR2 0x48

Adafruit_ADS1115 ads2(ADS1115_ADDR2);

void setup() {
  Serial.begin(9600);
  Wire.begin();

  // Initialize the ADS1115
  if (!ads2.begin(ADS1115_ADDR2)) {
    Serial.println("Failed to initialize ADS1115 2.");
    while (1);
  }

  // Set the gain for ADS1115
  ads2.setGain(GAIN_ONE);
}

void loop() {
  // Read analog values from ADS1115

  int16_t adc0_2 = ads2.readADC_SingleEnded(0);
  int16_t adc1_2 = ads2.readADC_SingleEnded(1);
  int16_t adc2_2 = ads2.readADC_SingleEnded(2);
  int16_t adc3_2 = ads2.readADC_SingleEnded(3);

  // Print the ADC values to the serial monitor
  
  Serial.print("ADS1115_2 AIN0: "); Serial.print(adc0_2); Serial.println(" ");
  Serial.print("ADS1115_2 AIN1: "); Serial.print(adc1_2); Serial.println(" ");
  Serial.print("ADS1115_2 AIN2: "); Serial.print(adc2_2); Serial.println(" ");
  Serial.print("ADS1115_2 AIN3: "); Serial.print(adc3_2); Serial.println(" ");

  delay(1000); // Delay for 1 second
}
