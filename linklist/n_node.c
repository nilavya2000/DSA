#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "base.h"

int n_node(struct Node * head, int key){
   struct Node * curr = head;
   int n=0;
   while(curr != NULL){
      if(n == key)
         return (curr->data);
      n++;
      curr = curr->next;
   }
   assert(0);
}

int main(){
   struct Node * head = NULL;
   push(&head, 3);
   push(&head, 12);
   push(&head, 9);
   push(&head, 6);
   push(&head, 7);
   printf("Element at index 2 is : %d\n",n_node(head, 2+1));

}