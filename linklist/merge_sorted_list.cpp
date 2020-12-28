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

Node *merge_list(Node *l1, Node *l2){
   if(l1 == NULL)
      return l2;
   if(l2==NULL)
      return l1;
   if(l1->data > l2 ->data)
      swap(l1, l2);
   Node *res = l1;

   while(l1 != NULL && l2 != NULL){
      Node *tmp;
      while(l1 != NULL && l1->data <= l2->data){
         tmp = l1;
         l1=l1->next;
      }
      tmp->next = l2;
      std::swap(l1, l2);
   }
   return res;
}

void print(Node *n){
   while(n!=NULL){
      cout<<n->data<<" ";
      n = n->next;
   }
   cout<<endl;
}

int main(){
   Node *res = NULL;
   Node *l1 = NULL;
   Node *l2 = NULL;

   push(&l1, 4);
   push(&l1, 2);
   push(&l1, 1);

   cout<<"1st list : \n";
   print(l1);

   push(&l2, 4);
   push(&l2, 3);
   push(&l2, 1);
   cout<<"2nd list : \n";
   print(l2);

   res = merge_list(l1, l2);

   cout<<"after addition : \n";
   print(res);
   return 0;

}