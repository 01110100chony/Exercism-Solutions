#include "binary.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

//INVALID -1
 
int convert(const char *input){



int binary = 0;

int size = strlen(input);

for(int i = 0 ; i < size ;i++){
    int digito = input[i] - '0';
        if(digito != 0 && digito != 1){
         return INVALID;
    }
}

int j = 0;

for(int i = size-1 ; i >= 0 ; i--){
int digito = input[j] - '0';
binary += digito * (pow(2,i));
j++;
}

return binary;
}
