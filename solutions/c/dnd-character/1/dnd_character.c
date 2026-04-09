#include "dnd_character.h"
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*You do this by rolling four 6-sided dice and recording the sum of the largest three dice.
You do this six times, once for each ability.

Your character's initial hitpoints are 10 + your character's constitution modifier.
You find your character's constitution modifier by subtracting 10 from your character's constitution, divide by 2 and round down.

Write a random character generator that follows the above rules.

For example, the six throws of four dice may look like:

- 5, 3, 1, 6: You discard the 1 and sum 5 + 3 + 6 = 14, which you assign to strength.
- 3, 2, 5, 3: You discard the 2 and sum 3 + 5 + 3 = 11, which you assign to dexterity.
- 1, 1, 1, 1: You discard the 1 and sum 1 + 1 + 1 = 3, which you assign to constitution.
- 2, 1, 6, 6: You discard the 1 and sum 2 + 6 + 6 = 14, which you assign to intelligence.
- 3, 5, 3, 4: You discard the 3 and sum 5 + 3 + 4 = 12, which you assign to wisdom.
- 6, 6, 6, 6: You discard the 6 and sum 6 + 6 + 6 = 18, which you assign to charisma.

Because constitution is 3, the constitution modifier is -4 and the hitpoints are 6.*/

int ability(void){
    int d[4];
    int abilityP = 0;
     for(int i = 0; i < 4 ; i++){
        d[i] = rand() % 6;
     }
     int maior = d[0];
     for(int i = 1 ; i < 4 ;i++){
        if(d[i] > maior){
            int temp = d[i];
            d[i] = d[i-1];
            d[i-1] = temp;
            maior = temp; 
        }
     }
     for(int i = 0 ; i < 3 ; i++){
        abilityP += d[i];
     }
return abilityP;
}

int modifier(int score){
    score -= 10;
    if(score < 0){
      return floor(score/2.0);
    }
    return score/2;
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
