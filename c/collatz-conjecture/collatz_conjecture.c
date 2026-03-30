#include "collatz_conjecture.h"

int steps(int start) {
    if (start == 1) return 0; //as a recursive func , this is the base

    if(start <= 0) return ERROR_VALUE; //returning error when the value is inadmissible

    if (start % 2 == 0) //in the case its even 
        return 1 + steps(start / 2); //we return 1 step + we call the function using half of start as parameter until it reaches 1.
    
    else
        return 1 + steps(3 * start + 1); //in the case its odd, we return the number * 3 + 1 , as it will turn into even
}

//crazy how we can compute collatz conjecture that easy, but we can't actually prove it as a 100% right theorem