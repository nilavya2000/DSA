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

void move(Node **head){
   Node * slast = NULL;
   Node * last = *head;

   if( *head == NULL || (*head)->next == NULL)
      return;
   
   while(last->next != NULL){
      slast = last;
      last=last->next;
   }
   slast->next = NULL;
   last->next = *head;
   *head = last;
}

int main(){
   Node *head = NULL;
   push(&head, 5);
   push(&head, 4);
   push(&head, 3);
   push(&head, 2);
   push(&head, 1);
   cout<<"List : \n";
   print(head);
   move(&head);
   cout<<"After moving : \n";
   print(head);
}