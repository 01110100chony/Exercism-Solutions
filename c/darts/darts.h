#ifndef DARTS_H
#define DARTS_H

typedef struct coordinate_t{

    float x,y;

}coordinate_t;

float distance(coordinate_t landpos);

int score(coordinate_t landing_position);

#endif
