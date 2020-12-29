#include <iostream>
using namespace std;

class Node{
public: 
   int data;
   Node * next;
};
Node * newNode(int data){
   Node * new_node = new Node();
   new_node->data = data;
   new_node->next = NULL;
   return new_node;
} 
void push(Node ** head, int data){
   Node *new_node = newNode(data);
   new_node->next = (*head);
   (*head) = new_node;
} 

void r_duplicates(Node *head){
   Node *curr = head;
   Node *nxt;
   if(curr == NULL)
      return;
   while(curr->next != NULL){
      if(curr->data == curr->next->data){
         nxt = curr->next->next;
         free(curr->next);
         curr->next = nxt;
      }
      else
         curr = curr->next;
   }
}

void print(Node *n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n = n->next;
   }
   cout<<endl;
}

int main(){
   Node *head=NULL;
   push(&head, 1);
   push(&head, 2);
   push(&head, 3);
   push(&head, 3);
   push(&head, 4);
   cout<<"list : \n";
   print(head);

   r_duplicates(head);

   cout<<"after removal: \n";
   print(head);
   return 0;

}