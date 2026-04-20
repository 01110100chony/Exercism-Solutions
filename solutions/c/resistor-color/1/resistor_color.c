#include "resistor_color.h"


resistor_band_t cores[] = {COLORS};

uint16_t color_code(resistor_band_t c){
    return c;
}
resistor_band_t* colors(){
    return cores;
}