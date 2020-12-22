#include <stdio.h>
#include <stdlib.h>
#include "base.h"

int count(struct Node *head, int x){
   struct Node * curr = head;
   int c=0;
   while(curr != NULL){
      if(curr->data == x){
         c+=1;
      }
      curr = curr->next;
   }
   return c;
}

int main(){
   struct Node * head = NULL;
   push(&head, 5);
   push(&head, 5);
   push(&head, 8);
   push(&head, 4);
   push(&head, 5);
   push(&head, 3);
   push(&head, 5);
   push(&head, 2);
   p(head);
   printf("Count of 5 is : - %d\n",count(head,5));

}