#include "high_scores.h"
///Sorry by portuguese being used to assign variables, im kinda lazy

/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len-1]; //simple as that
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len){

int32_t maior = 0; //just a temp variable to determine bigger etc etc
    
for(size_t i = 0 ; i < scores_len ; i++){
    if(scores[i] > maior){
        maior = scores[i];
    }
  }
    return maior;
}

/// Write the highest scores to `output` (in non-ascending order).
/// Return the number of scores written.
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output){
    
    size_t size_output = 0 ;
    
    if(scores_len < 3){
        size_output = scores_len;
    }
    else{
        size_output = 3;
    } //i.t.c where the scores r less than 3 , according to the tests 

    int32_t scoresTemp[scores_len]; //scores has type const int32_t , so I do think I shouldnt be messing with that so I created a temp for the scores (if im wrong bout that, correct me pls)

    for(size_t i = 0 ; i < scores_len ; i++){
        scoresTemp[i] = scores[i];
    } //filling the temp

    for(size_t i = 0 ; i < scores_len ; i++){
        for(size_t j = i + 1  ; j < scores_len ; j++){
            if(scoresTemp[j] > scoresTemp[i]){
                int32_t temp = scoresTemp[i];
                scoresTemp[i] = scoresTemp[j];
                scoresTemp[j] = temp;
            }//organizing the values by descending order, as in every iteration the second for will determine 
            //if the next value of the array is bigger than the actual. if array[1] ( the same  as j = i + 1 ) is bigger than array[0] ( i = 0 );
            //then, simple swap ;
    }
    
}
    for(size_t i = 0 ; i < size_output ; i++){
        output[i] = scoresTemp[i];
    } //just filling the output values by descending order now, based on the size I determined in the start of the function.
    return size_output; //we want the counter of times the output got filled , which comprehends if there is a tie {10,10,1} or there is scores < 3 = {10,10}
 }

 //correct me at any assumption of my part if im wrong. I want to learn the best way to code .
// also im sure there is ways to optimize this code but I cant visualize it. pls , help
