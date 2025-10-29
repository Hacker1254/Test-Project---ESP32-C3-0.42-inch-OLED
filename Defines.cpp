#include "Defines.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C Globals::u8g2(U8G2_R0, OLED_RESET, OLED_SCL, OLED_SDA);
int Globals::xOffset = 30 - 2;
int Globals::yOffset = 10 + 22;