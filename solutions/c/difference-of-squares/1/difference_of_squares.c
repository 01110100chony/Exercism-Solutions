#include "difference_of_squares.h"
#include <math.h>

//The square of the sum of the first ten natural numbers is (1 + 2 + ... + 10)² = 55² = 3025.
unsigned int square_of_sum(unsigned int number){
    int sqsum = 0;
    for(unsigned int i = 1 ; i < number + 1 ; i++){
    sqsum += i;
    }
   unsigned int result = pow(sqsum,2);
    return result;
}
//The sum of the squares of the first ten natural numbers is 1² + 2² + ... + 10² = 385.
unsigned int sum_of_squares(unsigned int number){
    int sumsq = 0;
    for(unsigned int i = 1 ; i < number + 1 ; i++){
    sumsq += pow(i,2);     
    }
    return sumsq;
}

//prolly sqsum - sumsq
unsigned int difference_of_squares(unsigned int number){
    unsigned int sq_sum = square_of_sum(number);
    unsigned int sum_squares = sum_of_squares(number);
    unsigned int result1 = sq_sum - sum_squares;
    return result1;
}