#include "perfect_numbers.h"

int classify_number(int n){

int sum = 0;

if( n <= 0 ) return -1;
for(int i = 1 ; i < n ; i++){
    if(n % i == 0 ){
        sum += i;
    }
}
if(sum == n) return 1;
if(sum > n) return 2;
if(sum < n) return 3;

return -1;

}