#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "base.h"
// iterative 
bool search(struct Node * head , int key){
   struct Node * curr = head;
   while(curr != NULL){
      if(curr->data == key)
         return true;
      curr = curr->next;
   }
   return false;
}
// recursive

bool search_e(struct Node * head, int key){
   if(head == NULL)
      return false;
   if(head->data == key)
      return true;
   return search_e(head->next, key);
}

int main(){
   struct Node * head = NULL;
   push(&head, 6);
   push(&head, 5);
   push(&head, 3);
   push(&head, 10);
   p(head);
   printf("Iterative \n");
   search(head, 3)? printf("3 present .? \nyes \n") : printf("3 present .? \nNO\n");
   printf("Recursive \n");
   search_e(head, 7)? printf("7 present .? \nyes \n") : printf("7 present .? \nNO\n");

   return 0;
}