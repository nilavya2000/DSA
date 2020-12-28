# include <iostream>
using namespace std;

class Node{
public: 
   int data;
   Node *next;
};

Node *newNode(int data){
   Node *new_node = new Node();
   new_node->data = data;
   new_node->next = NULL;
   return new_node;
}

void push(Node **head, int data){
   Node *new_node = newNode(data);
   new_node->next = (*head);
   (*head) = new_node;
}

Node *first_node(Node *head){
   if(head == NULL || head->next == NULL)
      return NULL;
   Node *slow = head;
   Node *fast = head;

   slow = slow->next;
   fast = fast->next->next;
 // seach for loop 
   while(fast && fast->next){
      if(slow == fast)
         break;
      slow=slow->next;
      fast=fast->next->next;
   }
 // check for loop
   if(slow != fast)
      return NULL;
 // if loop exist slow=head nd fast = meeting point 
   slow = head;
   while(slow != head){
      slow=slow->next;
      fast=fast->next;
   }

   return slow;
}

void print(Node *n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n=n->next;
   }
   cout<<endl;
}

int main(){

   Node* head = newNode(50);
   head->next = newNode(20);
   head->next->next = newNode(15);
   head->next->next->next = newNode(4);
   head->next->next->next->next = newNode(10);
 
   head->next->next->next->next->next = head->next->next;

   Node *value = first_node(head);
   print(head);
   (value == NULL) ? cout<<"Loop Doesn't exist" : cout<<"Starting node is : "<<value->data<<endl;
   return 0;
}