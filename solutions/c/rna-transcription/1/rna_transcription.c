#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
- `G` -> `C`
- `C` -> `G`
- `T` -> `A`
- `A` -> `U`
*/

char *to_rna(const char *dna){

if(dna == NULL) return NULL;

int size = strlen(dna);

char* rna = malloc((size + 1) * sizeof(char));

strcpy(rna,dna);

for(int i = 0 ; i < size ; i++){
    if(dna[i] == 'G'){
        rna[i] = 'C';
    }
   else if(dna[i] == 'C'){
        rna[i] = 'G';
    }
   else if(dna[i] == 'T'){
        rna[i] = 'A';
    }
   else if(dna[i] == 'A'){
        rna[i] = 'U';
    }
}

    return rna;
}


