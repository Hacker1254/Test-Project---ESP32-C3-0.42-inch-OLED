#include "Defines.h"


int c = 0;
void handle_oled(int c) {
  u8UI.clearBuffer();
  char outBuffer[20];

  // Can fit upto 4 lines of 17chars
  u8UI.drawStr(GainXOffset(0), YRow(0), "Display is working!");
  u8UI.drawStr(GainXOffset(0), YRow(1), " ~~ --------- ~~");
  u8UI.drawStr(GainXOffset(0), YRow(2), "-----------------"); // Full Screen
  
  snprintf(outBuffer, sizeof(outBuffer), "Uptime: %ds", c);
  u8UI.drawStr(GainXOffset(0), YRow(3), outBuffer);

  // Update OLED
  u8UI.sendBuffer();
}

void setup(void) {
  Serial.begin(115200);

  //Ready Display
  u8UI.begin();
  u8UI.setBusClock(400000);  //400kHz I2C
  u8UI.setContrast(255);     // set contrast to maximum
  u8UI.setFont(u8g2_font_4x6_tr);
}

int GainXOffset(int val) { return Globals::xOffset + val; }
int GainYOffset(int val) { return Globals::yOffset + val; }
int YRow(int val) { return (val < 4 ? GainYOffset(val * 10) : 4); } // Start at 0; clamp Rw 4

void loop(void) {
  handle_oled(c++);
  delay(1000);
}