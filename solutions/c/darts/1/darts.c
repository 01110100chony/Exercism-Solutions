#include "darts.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float distance(coordinate_t landing_position){
    float dis = sqrt(pow(landing_position.x,2) + pow(landing_position.y,2));
    return dis;
}

int score(coordinate_t landpos){
    if(distance(landpos) > 10){
        return 0;
    }
    else if(distance(landpos) > 5){ 
        return 1;
    }
    else if(distance(landpos) > 1){
        return 5;
    }
    return 10;
}