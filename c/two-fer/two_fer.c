#include "two_fer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void two_fer(char *buffer, const char *name){
    sprintf(buffer, "One for %s, one for me.", (name ? name : "you"));    // se name for NULL, usamos you, caso contrário usamos o nome dado
}

