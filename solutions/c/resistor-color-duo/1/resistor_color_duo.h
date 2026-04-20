#ifndef RESISTOR_COLOR_DUO_H
#define RESISTOR_COLOR_DUO_H

#include <inttypes.h>

typedef enum {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE,
    INVALID_COLOR
} resistor_band_t;

uint16_t color_code(resistor_band_t colors[2]); //creating array of enum to take as parameter for test

#endif
