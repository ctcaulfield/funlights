
#include <avr/pgmspace.h>

static const uint8_t PROGMEM joy[] = {
  0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x00,0x00,0x00,0x00,0x1C,0xFD,0xFD,0xFD,
  0xFD,0xFD,0x1C,0x1C,0x1C,0x1C,0x5C,0x5C,
  0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x22,
  0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,
  0x00,0x00,0x00,0x00,0x04,0x26,0x26,0x26,
  0x26,0x26,0x04,0x04,0x04,0x04,0x26,0x26,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
  0x00,0x00,0x00,0x00,0x0F,0x6F,0x6F,0x6F,
  0x6F,0x6F,0x0F,0x0F,0x0F,0x0F,0x2F,0x2F,
  0x5C,0x5C,0x1C,0x1C,0x1C,0x1C,0xFD,0xFD,
  0xFD,0xFD,0xFD,0x1C,0x00,0x00,0x00,0x00,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,
  0x26,0x26,0x04,0x04,0x04,0x04,0x26,0x26,
  0x26,0x26,0x26,0x04,0x00,0x00,0x00,0x00,
  0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,
  0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,
  0x2F,0x2F,0x0F,0x0F,0x0F,0x0F,0x6F,0x6F,
  0x6F,0x6F,0x6F,0x0F,0x00,0x00,0x00,0x00,
  0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x00,0x00,0x00,0x04,0x1C,0x1C,0xFD,0xFD,
  0xFD,0xE1,0xE1,0x00,0x1C,0x5C,0x5C,0x5C,
  0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x22,
  0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,
  0x00,0x00,0x00,0x00,0x04,0x04,0x26,0x26,
  0x26,0x22,0x22,0x00,0x04,0x06,0x26,0x26,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
  0x00,0x00,0x00,0x00,0x0F,0x0F,0x6F,0x6F,
  0x6F,0x60,0x60,0x00,0x0F,0x2F,0x2F,0x2F,
  0x5C,0x5C,0x5C,0x1C,0x00,0xE1,0xE1,0xFD,
  0xFD,0xFD,0x1C,0x1C,0x04,0x00,0x00,0x00,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,
  0x26,0x26,0x06,0x04,0x00,0x22,0x22,0x26,
  0x26,0x26,0x04,0x04,0x00,0x00,0x00,0x00,
  0x22,0x22,0x22,0x22,0x22,0x22,0x22,0x22,
  0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,
  0x2F,0x2F,0x2F,0x0F,0x00,0x60,0x60,0x6F,
  0x6F,0x6F,0x0F,0x0F,0x00,0x00,0x00,0x00,
  0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0xE1,0xE1,0xE1,0xE1,0xF5,0xFD,0xFD,0xFD,
  0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0xFD,
  0xFD,0xE1,0xE1,0xE1,0xFD,0x1C,0x1C,0x1C,
  0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x22,
  0x22,0x22,0x22,0x22,0x22,0x26,0x26,0x26,
  0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x26,
  0x26,0x22,0x22,0x22,0x26,0x04,0x04,0x04,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0x60,0x60,0x60,0x60,0x6F,0x6F,0x6F,0x6F,
  0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x6F,
  0x6F,0x60,0x60,0x60,0x6F,0x0F,0x0F,0x0F,
  0x1C,0x1C,0x1C,0xFD,0xE1,0xE1,0xE1,0xFD,
  0xFD,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,
  0xFD,0xFD,0xFD,0xF5,0xE1,0xE1,0xE1,0xE1,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,
  0x04,0x04,0x04,0x26,0x22,0x22,0x22,0x26,
  0x26,0x04,0x04,0x04,0x04,0x00,0x00,0x00,
  0x26,0x26,0x26,0x22,0x22,0x22,0x22,0x22,
  0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,
  0x0F,0x0F,0x0F,0x6F,0x60,0x60,0x60,0x6F,
  0x6F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,
  0x6F,0x6F,0x6F,0x6F,0x60,0x60,0x60,0x60,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0xA1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x00,0x04,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,
  0xFD,0xE1,0xE1,0xE1,0xFD,0xFD,0xFD,0xFD,
  0x00,0x00,0x02,0x22,0x22,0x22,0x22,0x22,
  0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,
  0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,
  0x26,0x22,0x22,0x22,0x26,0x26,0x26,0x26,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x6F,0x60,0x60,0x60,0x6F,0x6F,0x6F,0x6F,
  0xFD,0xFD,0xFD,0xFD,0xE1,0xE1,0xE1,0xFD,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x04,0x00,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xA1,0x00,0x00,
  0x26,0x26,0x26,0x26,0x22,0x22,0x22,0x26,
  0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00,
  0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
  0x22,0x22,0x22,0x22,0x22,0x02,0x00,0x00,
  0x6F,0x6F,0x6F,0x6F,0x60,0x60,0x60,0x6F,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x14,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x1C,0x20,0xE1,0xE1,0xFD,0xFD,0xFD,0xFD,
  0x00,0x00,0x00,0x22,0x22,0x22,0x22,0x22,
  0x04,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,
  0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,
  0x04,0x00,0x22,0x22,0x26,0x26,0x26,0x26,
  0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x60,
  0x0F,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x0F,0x00,0x60,0x60,0x6F,0x6F,0x6F,0x6F,
  0xFD,0xFD,0xFD,0xFD,0xE1,0xE1,0x20,0x1C,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x14,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,
  0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,0x00,
  0x26,0x26,0x26,0x26,0x22,0x22,0x00,0x04,
  0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00,
  0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0x04,
  0x22,0x22,0x22,0x22,0x22,0x00,0x00,0x00,
  0x6F,0x6F,0x6F,0x6F,0x60,0x60,0x00,0x0F,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0x0F,
  0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x00,
  0x00,0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xFD,
  0x1C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
  0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x1C,0x00,0x00,0x00,0xBD,0xFD,0xFD,0xFD,
  0x00,0x00,0x00,0x22,0x22,0x22,0x22,0x26,
  0x04,0x06,0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,
  0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x00,0x00,0x00,0x06,0x26,0x26,0x26,
  0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x6F,
  0x0F,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x0F,0x00,0x00,0x00,0x6F,0x6F,0x6F,0x6F,
  0xFD,0xFD,0xFD,0xBD,0x00,0x00,0x00,0x1C,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,
  0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x1C,
  0xFD,0xE1,0xE1,0xE1,0xE1,0x00,0x00,0x00,
  0x26,0x26,0x26,0x06,0x00,0x00,0x00,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
  0xE6,0xE6,0xE6,0xE6,0xE6,0xE6,0x06,0x04,
  0x26,0x22,0x22,0x22,0x22,0x00,0x00,0x00,
  0x6F,0x6F,0x6F,0x6F,0x00,0x00,0x00,0x0F,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0xEF,0x0F,
  0x6F,0x60,0x60,0x60,0x60,0x00,0x00,0x00,
  0x00,0x00,0x00,0x20,0xE1,0xE1,0xFD,0xFD,
  0xFD,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x1C,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x00,0x00,0x22,0x22,0x26,0x26,
  0x26,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x00,0x00,0x00,0x04,0x04,0x04,0x04,
  0x00,0x00,0x00,0x00,0x60,0x60,0x6F,0x6F,
  0x6F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x0F,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,
  0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x1C,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xFD,
  0xFD,0xFD,0xE1,0xE1,0x20,0x00,0x00,0x00,
  0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x26,
  0x26,0x26,0x22,0x22,0x00,0x00,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x0F,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x6F,
  0x6F,0x6F,0x60,0x60,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE1,0xFD,0xFD,0xFD,
  0xFD,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x1C,0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x00,0x00,0x22,0x26,0x26,0x26,
  0x26,0x04,0x04,0x04,0x04,0x04,0x04,0x04,
  0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,
  0x04,0x00,0x00,0x00,0x04,0x04,0x04,0x04,
  0x00,0x00,0x00,0x00,0x60,0x6F,0x6F,0x6F,
  0x6F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x0F,0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,
  0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,0x1C,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0xFD,
  0xFD,0xFD,0xFD,0xE1,0x00,0x00,0x00,0x00,
  0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x04,
  0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
  0x04,0x04,0x04,0x04,0x04,0x04,0x04,0x26,
  0x26,0x26,0x26,0x22,0x00,0x00,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x0F,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x6F,
  0x6F,0x6F,0x6F,0x60,0x00,0x00,0x00,0x00
};
