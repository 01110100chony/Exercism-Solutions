#include "eliuds_eggs.h"
#include <stdio.h>
#include <stdlib.h>


int egg_count(int n) {
  
    int binary = 0;
    while(n != 0){
        if(n % 2 == 1){ //logica binaria basica, enquanto n /= 2 nao resultar em 0 ( ou digamos , 1/2 = 0.5 = (int = 0 )), determinamos se seu resto eh 1 e colocamos no count binary . 
            binary++;
        }
        n /= 2;
    }
    return binary;
}

int main(){

int n = 2000000000;

printf("%d\n",egg_count(n));


}