#include <stdio.h>
#include <stdlib.h>
#include "base.h"



void delete(struct Node ** h_ref, int key){
   struct Node * temp = *h_ref, *prev;
   if(temp != NULL && temp->data == key){
      *h_ref=temp->next;
      free(temp);
      return; 
   }
   while(temp != NULL && temp->data != key){
      prev = temp;
      temp = temp->next;
   }
   if(temp == NULL)
      return;
   prev->next = temp->next;
   free(temp);

}



int main(){
   struct Node *head = NULL;
   printf("created link_list is : - \n ");
   push(&head, 6);
   push(&head, 4);
   push(&head, 3);
   push(&head, 2);
   p(head);
   delete(&head, 4);
   printf("After deleting one element: \n ");
   p(head);
   return 0;
}