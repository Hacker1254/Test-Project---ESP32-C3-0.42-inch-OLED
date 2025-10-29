#pragma once
#include <U8g2lib.h>


#define OLED_RESET U8X8_PIN_NONE  // Reset pin
#define OLED_SDA 5
#define OLED_SCL 6

#define u8UI Globals::u8g2

class Globals {
  public:
      static U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2;
      static int xOffset;
      static int yOffset;
};