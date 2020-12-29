#include <iostream>
using namespace std;

class Node {
public:
   int data;
   Node *next;
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
void print(Node *n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n = n->next;
   }
   cout<<endl;
}

Node *add(Node *head){
   Node *r = NULL;
   Node *tmp, *prev=NULL;
   int sum;
   while(head != NULL){
      sum = 1 + head->data;
      
      sum = sum % 10;
      
      tmp = newNode(sum);
      if(r == NULL)
         r = tmp;
      else
         prev->next = tmp;
      prev = tmp;
      head=head->next;
   }
   return r;
}

int main(){
   Node *head = NULL;
   Node *result = NULL;
   push(&head, 9);
   push(&head, 9);
   push(&head, 9);
   push(&head, 1);
   cout<<"List : \n";
   print(head);
   result = add(head);
   cout<<"Result : \n";
   print(result);
   return 0;
}