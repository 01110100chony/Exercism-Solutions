#include "resistor_color_duo.h"
#include <stdio.h>
#include <stdlib.h>

uint16_t color_code(resistor_band_t colors[2]){ ////receiving an array of 2 elements and utilizing only [0] , [1] 
return colors[0]*10+colors[1];    //ex : 1 + 0 = 1 * 10 + 0 = 10 , or 2 + 8 = 2 * 10 + 8 = 28 etc etc 
}

