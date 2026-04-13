#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct list_node {
   struct list_node *prev;
   ll_data_t data;
   struct list_node *next;
}list_node;

typedef struct list {
   list_node *first, *last;
}list;

list *list_create(void){
   list *lista = malloc(sizeof(list));
   if(lista){
      lista->first = NULL;
      lista->last = NULL;
   }
   return lista;
}

size_t list_count(const struct list *list){
   size_t count = 0;
   list_node* ptr = list->first;
   while(ptr != NULL){
      count++;
      ptr = ptr->next;
   }
return count;
}

void list_push(list *list, ll_data_t item_data) {

    list_node* newNode = malloc(sizeof(list_node));
    if (!newNode) return; 

    newNode->data = item_data;
    newNode->next = NULL; 
    newNode->prev = list->last;  //prev = da direita pra esquerda apontando pro first, next = da esquerda pra direita apontando pro last

  
    if (list->last == NULL) {
       
        list->first = newNode;
    } else {
      
        list->last->next = newNode;
    }


    list->last = newNode;
}

ll_data_t list_pop(struct list *list){
   list_node* ptr_killer = list->last;

   ll_data_t d = ptr_killer->data;

   list->last = ptr_killer->prev;

   if(list->last != NULL){
      list->last->next = NULL;

   }else{
      list->first = NULL;
   }

   free(ptr_killer);

   return d;
}

void list_unshift(struct list *list, ll_data_t item_data){

    list_node* newNode = malloc(sizeof(list_node));
    if (!newNode) return; 

    newNode->data = item_data;
    newNode->next = list->first;
    newNode->prev = NULL;
  
    if (list->first == NULL) {
        list->last = newNode;
    } else {
        list->first->prev = newNode;
    }
    list->first = newNode;
}

ll_data_t list_shift(struct list *list){
   
   list_node* ptr_killer = list->first;

   ll_data_t d = ptr_killer->data;

   list->first = ptr_killer->next;

   if(list->first != NULL){
      list->first->prev = NULL;
   }else{
      list->last = NULL;
   }

   free(ptr_killer);

   return d;
}

void list_delete(struct list *list, ll_data_t data) {
    list_node *ptr_killer = list->first;
    while (ptr_killer != NULL) {
        if (ptr_killer->data == data) {
           
            if (ptr_killer->prev != NULL) {
                ptr_killer->prev->next = ptr_killer->next;
            } else {
                list->first = ptr_killer->next;
            }

            if (ptr_killer->next != NULL) {
                ptr_killer->next->prev = ptr_killer->prev;
            } else {
     
                list->last = ptr_killer->prev;
            }
   
            free(ptr_killer);
      
            return; 
            
          
        } else {
            ptr_killer = ptr_killer->next;
        }
    }
}

void list_destroy(struct list *list){
   list_node *atual = list->first;
   list_node *proximo;
    while (atual != NULL) {
        proximo = atual->next; 
        free(atual);           
        atual = proximo;       
    }
    free(list); 
}