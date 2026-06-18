#include "ESP_I2S.h"         // Modern ESP32 Core v3 Audio Driver
#include "BluetoothA2DPSink.h" // Library to turn ESP32 into a BT Speaker

// Define your exact schematic pins for the MAX98357A Amp
#define I2S_BCLK          26  // AUDIO_BCLK on IO26
#define I2S_LRCK          27  // AUDIO_LRCLK on IO27
#define I2S_DOUT          25  // AUDIO_DIN on IO25

#define TILT_SWITCH_PIN   12  // SW2 connected to IO12

// Initialize the modern I2S audio driver instance
I2SClass i2s;

// Pass the I2S driver instance into the Bluetooth sink constructor
BluetoothA2DPSink a2dp_sink(i2s);

void setup() {
  Serial.begin(115200);

  // 1. Configure the Tilt Switch
  pinMode(TILT_SWITCH_PIN, INPUT_PULLUP);

  // 2. Configure the I2S hardware pin connections using the modern method
  i2s.setPins(I2S_BCLK, I2S_LRCK, I2S_DOUT, -1, -1); // (BCLK, WS/LRCK, DOUT, DIN, MCLK)

  // 3. Start the Bluetooth Speaker broadcast name!
  // This is the name you will see on your phone's Bluetooth settings screen.
  a2dp_sink.start("My Custom Shell");
  
  Serial.println("Bluetooth Speaker Audio Ready to Pair!");
}

void loop() {
  int switchState = digitalRead(TILT_SWITCH_PIN);

  if (switchState == LOW) {
    // If the shell is level, do nothing and let the music play normally
  } else {
    Serial.println("Shell Tilted! Pausing Spotify...");
    // The instant the shell is tilted, force your phone to PAUSE Spotify!
    if (a2dp_sink.is_connected()) {
        a2dp_sink.pause(); 
    }
  }

  delay(300); // Check the tilt switch a few times a second
}
