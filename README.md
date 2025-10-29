# ESP32-C3 OLED Demo 

## 🧰 Hardware Used

- Generic **ESP32-C3 SuperMini / OLED board** 
  - [`Aliexpress`](https://www.aliexpress.us/item/3256807156068355.html) - SP32 C3 OLED development board
  - [`EBay`](https://www.ebay.com/itm/166962377855) - Generic ESP32-C3 development board

---

## 📦 Required Libraries

Install these in IDE:

- [`U8g2`](https://github.com/olikraus/u8g2) — display handling  
- [`Wire`](https://www.arduino.cc/en/reference/wire) — I²C communication  

---

## ⚙️ Issues with Adafruit_SSD1306? (AI)

| Feature | U8g2 | Adafruit_SSD1306 |
|----------|------|------------------|
| **Performance on small displays** | Optimized partial refresh | Redraws full buffer every frame, wasting cycles |
| **RAM usage** | Lower — internal buffering optimized | Higher — full framebuffer stored in RAM, can cause crashes on small MCUs |
| **Drawing API** | Advanced — supports shapes, bitmaps, clipping, rotations | Very limited drawing commands |
| **Flicker-free buffering** | ✅ Dual-buffer rendering avoids flicker | ❌ Needs manual clear each frame, often flickers when redrawing text |
| **Code footprint** | Slightly larger but modular | Simple but less flexible |


---

## ⚡ Pinout Notes

| Signal | Default Pin |
|---------|--------------|
| SDA (OLED Display) | GPIO 5 |
| SCL (OLED Display) | GPIO 6 |

!!! Change these in `Globals.cpp` if your board uses different pins. !!!
