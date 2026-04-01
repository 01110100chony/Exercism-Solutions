#include "space_age.h"
#include <stdio.h>

float age(planet_t planet, int64_t seconds){

if(planet < 0  || planet > 7){ //if invalid planet 
        return -1;
}

double earth_year = seconds / (31557600.0 * orbital_perioods[planet]); // seconds/(60^2 * 24 * 365.25 * planet_period_relative)

return (double)earth_year;

}


