#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

//basically rolling with rand(), organizing array with bubble sort and using the bigger values for the ability point.
//then casting the modifier into character.constitution , obtaining hitpoints
int ability(void) {
    int d[4];
    int soma = 0;
    int menor = 7; 

    for (int i = 0; i < 4; i++) {

        d[i] = (rand() % 6) + 1; 
        soma += d[i];
        
        
        if (d[i] < menor) {
            menor = d[i];
        }
    }

    return soma - menor;
}

int modifier(int score){
    score -= 10;
    if(score < 0){
      return (int)floor(score/2.0);
    }
    return  score/2;
}

dnd_character_t make_dnd_character(void){
    
    dnd_character_t char1;

    char1.strength = ability();
    char1.dexterity = ability();
    char1.intelligence = ability();
    char1.wisdom = ability();
    char1.charisma = ability();
    char1.constitution = ability();

    char1.hitpoints = 10 + modifier(char1.constitution);

    return char1;

}
