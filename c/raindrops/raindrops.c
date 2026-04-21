#include "raindrops.h"
#include <stdio.h>

void convert(char result[], int drops){ 

if( ( drops % 3 != 0 ) && ( drops % 5 != 0)  && (drops % 7 != 0)){sprintf(result, "%d",drops);} //no caso que o numero nao seja divisivel por 3,5,7, result = proprio drops (int)
    else{
        char *buffer1 = "Pling";
        char *buffer2 = "Plang";
        char *buffer3 = "Plong";
        sprintf(result, "%s%s%s", (drops % 3 == 0 ? buffer1 : ""), (drops % 5 == 0 ? buffer2 : ""), (drops % 7 == 0 ? buffer3 : "")); //checagem simultanea das condicoes.   
    }                                                                                                                                  
}

//como o escopo do exercicio sugere que ha apenas 3 variacoes "pling...plang...plong" , optei por usar ternarios apenas pra praticidade das condicoes.
//caso fossem varias strings diferentes , a melhor opcao seria ir somando um sprintf com as condicoes adjacentes, evitando uso de pointers *buffer.
//nesse caso , a stack importaria mais por utilizar menos calculos de (mod) e checagem indireta de %s, e seria mandatorio melhorar a complexidade de espaco.