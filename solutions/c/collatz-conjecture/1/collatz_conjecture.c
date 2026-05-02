#include "collatz_conjecture.h"

int steps(int start) {
    if (start == 1) return 0;

    if(start <= 0) return ERROR_VALUE;

    if (start % 2 == 0)
        return 1 + steps(start / 2);
    
    else
        return 1 + steps(3 * start + 1);
}