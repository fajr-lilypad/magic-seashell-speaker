_#include "ESP_I2S.h" // Modern ESP32 Core v3+ Audio Driver

// Define your exact schematic pins
#define TILT_SWITCH_PIN   12  // SW2 connected to IO12
#define I2S_BCLK          26  // AUDIO_BCLK on IO26
#define I2S_LRCK          27  // AUDIO_LRCLK on IO27
#define I2S_DOUT          25  // AUDIO_DIN on IO25

// Create the modern audio output object
I2SClass i2s;

void setup() {
  Serial.begin(115200);
  
  //Configure the Tilt Switch pin with internal pull-up resistor
  pinMode(TILT_SWITCH_PIN, INPUT_PULLUP);

  // Initialize Modern I2S Driver pins
  i2s.setPins(I2S_BCLK, I2S_LRCK, I2S_DOUT, -1, -1); // (BCLK, WS/LRCK, DOUT, DIN, MCLK)
  
  // Start I2S
  // Mode, Sample Rate, Bits per Sample, and Channel Slot Mode
  if (!i2s.begin(I2S_MODE_STD, 44100, I2S_DATA_BIT_WIDTH_16BIT, I2S_SLOT_MODE_STEREO)) {
    Serial.println("Failed to initialize I2S audio module!");
    while (1); // Halt if audio fails
  }

  Serial.println("Sound-Only Hardware Initialized Successfully!");
}

void loop() {
  // Reading status of tilt sensor
  int switchState = digitalRead(TILT_SWITCH_PIN);

  if (switchState == LOW) {
    Serial.println("Shell Status: Level / Upright");
  } else {
    Serial.println("Shell Status: Tilted / Moved!");
  }

  delay(200); //delay
}