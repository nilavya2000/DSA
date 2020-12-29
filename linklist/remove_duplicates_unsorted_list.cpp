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
   Node *tmp1, *tmp2, *nxt;
   tmp1 = head;

   while(tmp1 != NULL && tmp1->next !=NULL){
      tmp2 = tmp1;
      while(tmp2 != NULL && tmp2->next != NULL){
         if(tmp1->data == tmp2->next->data){
            nxt = tmp2->next;
            tmp2->next = tmp2->next->next;
            free(nxt);
         }
         else
            tmp2=tmp2->next;
      }
      tmp1=tmp1->next;
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
   Node * head=NULL;
   push(&head, 5);
   push(&head, 2);
   push(&head, 1);
   push(&head, 5);
   push(&head, 3);
   cout<<"List : \n";
   print(head);
   r_duplicates(head);
   cout<<"After removal of duplicates: \n";
   print(head);
   return 0;
}