#include <stdio.h>
#include <stdlib.h>
#include "base.h"


int count(struct Node * head){
   int cn=0;
   struct Node * c = head;
   while (c != NULL){
      cn +=1;
      c=c->next;
   }
   return cn;

}


int g_count(struct Node * head){
   if(head == NULL)
      return 0;
   return 1+ g_count(head->next);
}

int main(){
   struct Node *head = NULL;
   printf("created link_list is : - \n ");
   push(&head, 6);
   push(&head, 4);
   push(&head, 3);
   push(&head, 2);
   p(head);
   printf("Total no of nodes (iterative): - %d \n", count(head));
   printf("Total no of nodes (recursive) : - %d \n", g_count(head));
   return 0;
}