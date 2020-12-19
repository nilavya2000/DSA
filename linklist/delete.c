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
   delete(&head, 4);
   p(head);
   return 0;
}