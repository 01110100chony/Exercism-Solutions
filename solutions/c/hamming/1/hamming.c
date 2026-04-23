#include "hamming.h"
#include <string.h>

/*
If we compare two strands of DNA and count the differences between them, we can see how many mistakes occurred.
This is known as the "Hamming distance".

Calculate the Hamming distance between two DNA strands.

We read DNA using the letters C, A, G and T.
Two strands might look like this:

    GAGCCTACTAACGGGAT
    CATCGTAATGACGGCCT 17
    ^ ^ ^  ^ ^    ^^

They have 7 differences, and therefore the Hamming distance is 7. t c g a

## Implementation notes

The Hamming distance is only defined for sequences of equal length, so an attempt to calculate it between sequences of different lengths should not work.
*/

int compute(const char *lhs, const char *rhs){
    int size_l = strlen(lhs); // determining the samples length
    int size_r = strlen(rhs);

    if( ( size_l != size_r ) ){
        return -1;
    }
   
    if((size_l == size_r)==0){
        return 0;
    }
    else{
    int count = 0;
        for(int i = 0 ; i < size_l ; i++){
            if(lhs[i]!=rhs[i]){
                count++;
            }
        }
        return count;
}
    }
