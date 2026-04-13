#include "binary.h"
#include <stdio.h>

#define INVALID -1

int convert(const char *input) {
    if (input == NULL) return INVALID;

    int decimal = 0;

    for (int i = 0; input[i] != '\0'; i++) { //enquanto o ponteiro nao for caracter nulo
  
        if (input[i] != '0' && input[i] != '1') { // verificando se contem algo que nao seja 0 ou 1, retornado invalid nesse acso
            return INVALID;
        }

    
        decimal = (decimal * 2) + (input[i] - '0'); //quando i = 0,decimal vai ser primeiro numero , quando i=1 ,
                                                    //primeiro numero * 2 + segundo numero.......(...)
    }

    return decimal;
}