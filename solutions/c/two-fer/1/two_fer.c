#include "two_fer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void two_fer(char *buffer, const char *name){


if(name == NULL){
const char *expected = "One for you, one for me.";
strcpy(buffer,expected);
} else {
const char *expected = "One for ";
strcpy(buffer,expected);
strcat(buffer,name);
strcat(buffer,", one for me.");
}

}

