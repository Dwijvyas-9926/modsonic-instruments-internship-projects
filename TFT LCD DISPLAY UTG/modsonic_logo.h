#ifndef MODSONIC_LOGO_H
#define MODSONIC_LOGO_H
#include <avr/pgmspace.h>
#include <stdint.h>
#define IMG_W  240
#define IMG_H  100
#define CHUNK  6000
extern const uint16_t logo_chunk0[6000] PROGMEM;
extern const uint16_t logo_chunk1[6000] PROGMEM;
extern const uint16_t logo_chunk2[6000] PROGMEM;
extern const uint16_t logo_chunk3[6000] PROGMEM;
#endif