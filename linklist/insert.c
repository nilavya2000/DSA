#include <stdio.h>
#include <stdlib.h>
struct Node{
   int data;
   struct Node *next;
};

void i_front(struct Node** h_ref, int new_data){
   struct Node* new_node = (struct Node * )malloc(sizeof(struct Node ));
   new_node->data = new_data;
   new_node->next = (*h_ref);
   (*h_ref) = new_node;
}

void i_after(struct Node * p_node, int new_data){
   if(p_node == NULL){
      printf("Previous Node canot be empty . !! ");
      return ; 
   }
   struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = p_node->next;
   p_node->next = new_node;
   return;

}

void i_end(struct Node** h_ref, int new_data){
   struct Node * new_node = (struct Node *)malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = NULL;

   struct Node * last = *h_ref;
   if(*h_ref == NULL){
      *h_ref = new_node;
   }
   while(last->next != NULL)
      last = last->next;
   last->next = new_node;
   return;
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
   i_front(&head, 6);
   i_front(&head, 4);
   p(head);
   i_end(&head, 10);
   i_after(head->next ,5);
   
   p(head);
   return 0;
}