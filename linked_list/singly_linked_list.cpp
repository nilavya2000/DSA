#include <iostream>
using namespace std;

struct node {
public:
	int data;
	struct node *next;
};
struct node* head=NULL;


void display(){
	struct node* n;
	n=head;
	while(n!=NULL){
		cout<< n->data << " ";
		n = n->next;
	}
}
void insert(int new_d){
	struct node* new_node= (struct node*) malloc(sizeof(struct node));
	new_node->data=new_d;
	new_node->next=head;
	head=new_node;
}



int main(){

	insert(1);
	insert(2);
	display();

	return 0;
}
