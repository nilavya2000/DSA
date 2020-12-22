#include <stdio.h>
#include <stdlib.h>
#include "base.h"

void m_elem(struct Node * head){
   struct Node * fe = head;
   struct Node * se = head;

   if(head != NULL){
      while(fe !=NULL && fe->next !=NULL){
      fe = fe->next->next;
      se = se->next;
      }
      printf("middle element is %d\n", se->data);

   }
}

void m_elem2 (struct Node * head){
   struct Node *curr = head;
   int c=0, m=0,a;
   while(curr != NULL){
      c+=1;
      curr= curr->next;
   }

   printf("No of nodes : - %d", c);
   struct Node * middle = head;
   while(a !=c){
      middle = middle->next;
      a++;
   }
   printf("Middle element is :- %d",middle->data);
} 

int main(){
   struct Node * head = NULL;
   push(&head, 6);
   push(&head, 4);
   push(&head, 5);
   push(&head, 9);
   push(&head, 10);
   p(head);
   m_elem(head);
   m_elem2(head);
}