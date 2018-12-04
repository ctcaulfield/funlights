#include <avr/pgmspace.h>

static const uint8_t PROGMEM sadness[] = {
  0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x43,0x43,0x43,0x43,0xE1,0xE1,0xE1,0xE1,
  0x00,0x00,0x00,0x00,0x1C,0xFD,0xFD,0xFD,
  0x53,0x4F,0x4F,0x4F,0xFD,0x1C,0x1C,0x1C,
  0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x22,
  0x80,0x80,0x80,0x80,0x22,0x22,0x22,0x22,
  0x00,0x00,0x00,0x00,0x04,0x26,0x26,0x26,
  0x84,0x88,0x88,0x88,0x26,0x04,0x04,0x04,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0xC0,0xC0,0xC0,0xC0,0x60,0x60,0x60,0x60,
  0x00,0x00,0x00,0x00,0x0F,0x6F,0x6F,0x6F,
  0xCF,0xC5,0xC5,0xC5,0x6F,0x0F,0x0F,0x0F,
  0x1C,0x1C,0x1C,0xFD,0x4F,0x4F,0x4F,0x53,
  0xFD,0xFD,0xFD,0x1C,0x00,0x00,0x00,0x00,
  0xE1,0xE1,0xE1,0xE1,0x43,0x43,0x43,0x43,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,
  0x04,0x04,0x04,0x26,0x88,0x88,0x88,0x84,
  0x26,0x26,0x26,0x04,0x00,0x00,0x00,0x00,
  0x22,0x22,0x22,0x22,0x80,0x80,0x80,0x80,
  0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,
  0x0F,0x0F,0x0F,0x6F,0xC5,0xC5,0xC5,0xCF,
  0x6F,0x6F,0x6F,0x0F,0x00,0x00,0x00,0x00,
  0x60,0x60,0x60,0x60,0xC0,0xC0,0xC0,0xC0,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x43,0x43,0x43,0x43,0xE1,0xE1,0x00,0x00,
  0x00,0x00,0x00,0x04,0x1C,0x0C,0xED,0xED,
  0x4F,0x4F,0x4F,0x5F,0xFD,0xFD,0x1C,0x1C,
  0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x22,
  0x80,0x80,0x80,0x80,0x22,0x22,0x00,0x00,
  0x00,0x00,0x00,0x00,0x04,0x08,0x2A,0x2A,
  0x88,0x88,0x88,0x84,0x26,0x26,0x04,0x04,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0xC0,0xC0,0xC0,0xC0,0x60,0x60,0x00,0x00,
  0x00,0x00,0x00,0x00,0x0F,0x05,0x65,0x65,
  0xC5,0xC5,0xC5,0xCF,0x6F,0x6F,0x0F,0x0F,
  0x1C,0x1C,0xFD,0xFD,0x5F,0x4F,0x4F,0x4F,
  0xED,0xED,0x0C,0x1C,0x04,0x00,0x00,0x00,
  0x00,0x00,0xE1,0xE1,0x43,0x43,0x43,0x43,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,
  0x04,0x04,0x26,0x26,0x84,0x88,0x88,0x88,
  0x2A,0x2A,0x08,0x04,0x00,0x00,0x00,0x00,
  0x00,0x00,0x22,0x22,0x80,0x80,0x80,0x80,
  0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,
  0x0F,0x0F,0x6F,0x6F,0xCF,0xC5,0xC5,0xC5,
  0x65,0x65,0x05,0x0F,0x00,0x00,0x00,0x00,
  0x00,0x00,0x60,0x60,0xC0,0xC0,0xC0,0xC0,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x43,0x43,0x43,0x43,0xF5,0x1C,0x1F,0xFF,
  0x00,0x00,0x00,0x1C,0x1C,0x0C,0x0C,0xED,
  0x4F,0x5F,0x5F,0x5F,0xFD,0xFD,0xFD,0xFD,
  0x00,0x00,0x22,0x22,0x22,0x22,0x22,0x22,
  0x80,0x80,0x80,0x80,0x22,0x04,0xE6,0xE6,
  0x00,0x00,0x00,0x04,0x04,0x08,0x08,0x2A,
  0x88,0x84,0x84,0x84,0x26,0x26,0x26,0x26,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0xC0,0xC0,0xC0,0xC0,0x6F,0x0F,0xEF,0xEF,
  0x00,0x00,0x00,0x0F,0x0F,0x05,0x05,0x65,
  0xC5,0xCF,0xCF,0xCF,0x6F,0x6F,0x6F,0x6F,
  0xFD,0xFD,0xFD,0xFD,0x5F,0x5F,0x5F,0x4F,
  0xED,0x0C,0x0C,0x1C,0x1C,0x00,0x00,0x00,
  0xFF,0x1F,0x1C,0xF5,0x43,0x43,0x43,0x43,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,
  0x26,0x26,0x26,0x26,0x84,0x84,0x84,0x88,
  0x2A,0x08,0x08,0x04,0x04,0x00,0x00,0x00,
  0xE6,0xE6,0x04,0x22,0x80,0x80,0x80,0x80,
  0x22,0x22,0x22,0x22,0x22,0x22,0x00,0x00,
  0x6F,0x6F,0x6F,0x6F,0xCF,0xCF,0xCF,0xC5,
  0x65,0x05,0x05,0x0F,0x0F,0x00,0x00,0x00,
  0xEF,0xEF,0x0F,0x6F,0xC0,0xC0,0xC0,0xC0,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0xA1,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x43,0x47,0x5F,0x5F,0x1C,0x1F,0xFF,0xFF,
  0x00,0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x5F,0x5F,0x5F,0x5F,0xFD,0xFD,0xFD,0xFD,
  0x00,0x00,0x02,0x22,0x22,0x22,0x22,0x22,
  0x80,0x80,0x84,0x84,0x04,0xE6,0xE6,0xE6,
  0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,
  0x84,0x84,0x84,0x84,0x26,0x26,0x26,0x26,
  0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,
  0xC0,0xC0,0xCF,0xCF,0x0F,0xEF,0xEF,0xEF,
  0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,
  0xCF,0xCF,0xCF,0xCF,0x6F,0x6F,0x6F,0x6F,
  0xFD,0xFD,0xFD,0xFD,0x5F,0x5F,0x5F,0x5F,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,0x00,
  0xFF,0xFF,0x1F,0x1C,0x5F,0x5F,0x47,0x43,
  0xE1,0xE1,0xE1,0xE1,0xE1,0xA1,0x00,0x00,
  0x26,0x26,0x26,0x26,0x84,0x84,0x84,0x84,
  0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00,
  0xE6,0xE6,0xE6,0x04,0x84,0x84,0x80,0x80,
  0x22,0x22,0x22,0x22,0x22,0x02,0x00,0x00,
  0x6F,0x6F,0x6F,0x6F,0xCF,0xCF,0xCF,0xCF,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,
  0xEF,0xEF,0xEF,0x0F,0xCF,0xCF,0xC0,0xC0,
  0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x00,
  0x00,0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xE1,
  0x5F,0x5F,0x5F,0x5F,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x14,0x1C,0x1C,0x1C,0x5F,0x5F,
  0x43,0x43,0x43,0x43,0x43,0x5F,0x5F,0x5F,
  0x00,0x00,0x00,0x22,0x22,0x22,0x22,0x22,
  0x84,0x84,0x84,0x84,0x04,0x04,0x04,0x04,
  0x00,0x00,0x00,0x04,0x04,0x04,0x84,0x84,
  0x80,0x80,0x80,0x80,0x80,0x84,0x84,0x84,
  0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x60,
  0xCF,0xCF,0xCF,0xCF,0x0F,0x0F,0x0F,0x0F,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0xCF,0xCF,
  0xC0,0xC0,0xC0,0xC0,0xC0,0xCF,0xCF,0xCF,
  0x5F,0x5F,0x5F,0x43,0x43,0x43,0x43,0x43,
  0x5F,0x5F,0x1C,0x1C,0x1C,0x14,0x00,0x00,
  0x1C,0x1C,0x1C,0x1C,0x5F,0x5F,0x5F,0x5F,
  0xE1,0xE1,0xE1,0xE1,0xE1,0x00,0x00,0x00,
  0x84,0x84,0x84,0x80,0x80,0x80,0x80,0x80,
  0x84,0x84,0x04,0x04,0x04,0x00,0x00,0x00,
  0x04,0x04,0x04,0x04,0x84,0x84,0x84,0x84,
  0x22,0x22,0x22,0x22,0x22,0x00,0x00,0x00,
  0xCF,0xCF,0xCF,0xC0,0xC0,0xC0,0xC0,0xC0,
  0xCF,0xCF,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0xCF,0xCF,0xCF,0xCF,
  0x60,0x60,0x60,0x60,0x60,0x00,0x00,0x00,
  0x00,0x00,0x00,0xE1,0xE1,0xE1,0xE1,0xFD,
  0x5F,0x5F,0x5F,0x5F,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x5F,0x43,
  0x43,0x43,0x43,0x43,0x43,0x43,0x5F,0x5F,
  0x00,0x00,0x00,0x22,0x22,0x22,0x22,0x26,
  0x84,0x84,0x84,0x84,0x04,0x04,0x04,0x04,
  0x00,0x00,0x04,0x04,0x04,0x04,0x84,0x80,
  0x80,0x80,0x80,0x80,0x80,0x80,0x84,0x84,
  0x00,0x00,0x00,0x60,0x60,0x60,0x60,0x6F,
  0xCF,0xCF,0xCF,0xCF,0x0F,0x0F,0x0F,0x0F,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0xCF,0xC0,
  0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,0xCF,0xCF,
  0x5F,0x5F,0x43,0x43,0x43,0x43,0x43,0x43,
  0x43,0x5F,0x1C,0x1C,0x1C,0x1C,0x00,0x00,
  0x1C,0x1C,0x1C,0x1C,0x5F,0x5F,0x5F,0x5F,
  0xFD,0xE1,0xE1,0xE1,0xE1,0x00,0x00,0x00,
  0x84,0x84,0x80,0x80,0x80,0x80,0x80,0x80,
  0x80,0x84,0x04,0x04,0x04,0x04,0x00,0x00,
  0x04,0x04,0x04,0x04,0x84,0x84,0x84,0x84,
  0x26,0x22,0x22,0x22,0x22,0x00,0x00,0x00,
  0xCF,0xCF,0xC0,0xC0,0xC0,0xC0,0xC0,0xC0,
  0xC0,0xCF,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0xCF,0xCF,0xCF,0xCF,
  0x6F,0x60,0x60,0x60,0x60,0x00,0x00,0x00,
  0x00,0x00,0x00,0x20,0xE1,0xE1,0xFD,0xFD,
  0x5F,0x5F,0x5F,0x43,0x00,0x1C,0x1C,0x1C,
  0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,
  0x08,0x08,0x08,0x08,0x1C,0x00,0x1C,0x1C,
  0x00,0x00,0x00,0x00,0x22,0x22,0x26,0x26,
  0x84,0x84,0x84,0x84,0x04,0x04,0x04,0x04,
  0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x00,
  0x11,0x11,0x11,0x11,0x04,0x00,0x04,0x04,
  0x00,0x00,0x00,0x00,0x60,0x60,0x6F,0x6F,
  0xCF,0xCF,0xCF,0xCF,0x0F,0x0F,0x0F,0x0F,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,
  0x1A,0x1A,0x1A,0x1A,0x0F,0x00,0x0F,0x0F,
  0x1C,0x1C,0x00,0x1C,0x08,0x08,0x08,0x08,
  0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,
  0x1C,0x1C,0x1C,0x00,0x43,0x5F,0x5F,0x5F,
  0xFD,0xFD,0xE1,0xE1,0x20,0x00,0x00,0x00,
  0x04,0x04,0x00,0x04,0x11,0x11,0x11,0x11,
  0x00,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
  0x04,0x04,0x04,0x04,0x84,0x84,0x84,0x84,
  0x26,0x26,0x22,0x22,0x00,0x00,0x00,0x00,
  0x0F,0x0F,0x00,0x0F,0x1A,0x1A,0x1A,0x1A,
  0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0xCF,0xCF,0xCF,0xCF,
  0x6F,0x6F,0x60,0x60,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xE1,0xFD,0xFD,0xFD,
  0x5F,0x5F,0x4F,0x4F,0x0C,0x1C,0x1C,0x1C,
  0x00,0x00,0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,
  0x08,0x08,0x08,0x08,0x1C,0x1C,0x1C,0x1C,
  0x00,0x00,0x00,0x00,0x22,0x26,0x26,0x26,
  0x84,0x84,0x88,0x88,0x08,0x04,0x04,0x04,
  0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x04,
  0x11,0x11,0x11,0x11,0x04,0x04,0x04,0x04,
  0x00,0x00,0x00,0x00,0x60,0x6F,0x6F,0x6F,
  0xCF,0xCF,0xC5,0xC5,0x05,0x0F,0x0F,0x0F,
  0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
  0x1A,0x1A,0x1A,0x1A,0x0F,0x0F,0x0F,0x0F,
  0x1C,0x1C,0x1C,0x1C,0x08,0x08,0x08,0x08,
  0x1C,0x1C,0x1C,0x1C,0x1C,0x1C,0x00,0x00,
  0x1C,0x1C,0x1C,0x0C,0x4F,0x4F,0x5F,0x5F,
  0xFD,0xFD,0xFD,0xE1,0x00,0x00,0x00,0x00,
  0x04,0x04,0x04,0x04,0x11,0x11,0x11,0x11,
  0x04,0x04,0x04,0x04,0x04,0x04,0x00,0x00,
  0x04,0x04,0x04,0x08,0x88,0x88,0x84,0x84,
  0x26,0x26,0x26,0x22,0x00,0x00,0x00,0x00,
  0x0F,0x0F,0x0F,0x0F,0x1A,0x1A,0x1A,0x1A,
  0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,0x00,
  0x0F,0x0F,0x0F,0x05,0xC5,0xC5,0xCF,0xCF,
  0x6F,0x6F,0x6F,0x60,0x00,0x00,0x00,0x00
};