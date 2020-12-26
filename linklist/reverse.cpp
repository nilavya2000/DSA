#include <iostream>
using namespace std;

struct Node{
   int data;
   struct Node * next;
   Node(int data){
      this->data = data;
      next = NULL;
   } 
};

struct Linklist{
   Node * head;
   Linklist() {
      head = NULL; 
   }
   void reverse(){
      Node * curr = head;
      Node *prev = NULL, *next = NULL;
      while(curr != NULL){
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
      }
      head = prev;
   }
   void print(){
      struct Node * tmp = head;
      while(tmp != NULL){
         cout<<tmp->data<<" ";
         tmp = tmp->next;
      }
   }

   void push(int data){
      Node * tmp = new Node(data);
      tmp->next = head;
      head = tmp; 
   }

};

int main(){
   Linklist ll;
   ll.push(10); 
   ll.push(20);
   ll.push(30);
   ll.push(40);
   ll.push(50);
   cout<<"Current Linklist \n";
   ll.print();
   cout<<"\n";
   cout<<"After Reversing \n";
   ll.reverse();
   ll.print();
   cout<<"\n";
   return 0;
}

