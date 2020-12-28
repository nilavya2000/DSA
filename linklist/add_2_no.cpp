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

void push(Node ** head, int new_data){
   Node * new_node = newNode(new_data);
   new_node->next = (*head);
   (*head) = new_node;
}

Node * add(Node * first, Node * second){
   Node *res = NULL;
   Node *temp, *prev = NULL;
   int carry=0, sum;

   while(first != NULL || second != NULL){
      sum = carry + (first ? first->data : 0) + (second ? second->data : 0);
      carry = (sum >= 10) ? 1 : 0; 
      sum = sum % 10;

      temp = newNode(sum);
      if(res == NULL)
         res = temp;
      else
         prev->next = temp;

      prev = temp;

      
      first = first ? first->next : first;
      second = second ? second->next : second; 
   } 
   
   temp->next = (carry>0)? newNode(carry): NULL;
   return res;
}

void print(Node * node){
   while( node != NULL){
      cout<< node->data <<" ";
      node=node->next; 
   }
   cout<<endl;
}


int main(){
   Node *res = NULL;
   Node * first = NULL;
   Node *second = NULL;

   push(&first, 1);
   push(&first, 2);
   push(&first, 3);
   push(&first, 4);
   push(&first, 5);
   printf("First list : \n");
   print(first);
   
   push(&second, 5);
   push(&second, 4);
   push(&second, 3);
   push(&second, 2);
   push(&second, 6);
   printf("Second list : \n");
   print(second);

   res = add(first, second);

   cout<<"Result: \n";
   print(res);
   return 0;

}
