#include "difference_of_squares.h"
#include <math.h>

unsigned int sum(unsigned int number){
    if(number == 1 ){
        return 1;
    }
    return number + (sum(number-1)); //recursive func for sum
}

unsigned int square_of_sum(unsigned int number){
    return pow(sum(number),2); //doing sum^2
}

unsigned int sum_of_squares(unsigned int number){
    if(number == 1){
        return 1; 
    }
    return pow(number,2) + sum_of_squares(number-1);// recursive func for squares
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);   //calling the 2 previous func and returning it directly
}
