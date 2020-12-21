#include <stdio.h>
#include <stdlib.h>

struct Node{
   int data;
   struct Node *next;
};

void push(struct Node** h_ref, int new_data){
   struct Node* new_node = (struct Node * )malloc(sizeof(struct Node ));
   new_node->data = new_data;
   new_node->next = (*h_ref);
   (*h_ref) = new_node;
}

int count(struct Node * head){
   int cn=0;
   struct Node * c = head;
   while (c != NULL){
      cn +=1;
      c=c->next;
   }
   return cn;

}
void p(struct Node *head){
   while(head != NULL){
      printf(" %d ",head->data);
      head = head->next;
   }
   printf("\n");
}


int main(){
   struct Node *head = NULL;
   printf("created link_list is : - \n ");
   push(&head, 6);
   push(&head, 4);
   push(&head, 3);
   push(&head, 2);
   p(head);
   printf("Total no of nodes : - %d \n", count(head));
   return 0;
}