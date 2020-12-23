#include <stdio.h>
#include <stdlib.h>
#include "base.h"

// Floyd's cycle-Finding algorithm 
int detect(struct Node * head){
   struct Node * snd = head;
   struct Node * fst = head;

   while(snd && fst && fst->next){
      snd = snd->next;
      fst = fst->next->next;
      if(snd == fst)
         return 1;
   }
   return 0;
}

int main(){
   struct Node * head = NULL;
   push(&head, 20);
   push(&head, 4);
   push(&head, 15);
   push(&head, 10);
 
   head->next->next->next->next = head;
   
   if(detect(head))
      printf("there is a loop .!!\n");
   else
      printf("there is no loop.!! \n");



}