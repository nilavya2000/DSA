#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *next;
};


struct node* empty(struct node* head, int data){
	if(head!=NULL)
		return head;
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data =data;
	head=temp;
	head->next=head;
	return head;
}

struct node* begining(struct node *head, int data){
	if(head==NULL)
		return empty(head, data);

	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head->next;
	head->next=temp;
}

struct node* end(struct node *head, int data){
	if(head== NULL)
		return empty(head, data);

	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head->next;
	head->next=temp;
	head=temp;

	return head;
}


struct node* after(struct node* head, int data, int item){

	if(head==NULL)
		return NULL;
	struct node *temp, *a;
	a=head->next;
	do{
		if(a->data==item){
			temp = (struct node*)malloc(sizeof(struct node));
			temp->data=data;
			temp->next=a->next;
			a->next=temp;

			if(a==head)
				head=temp;
			return head;
		}
		a=a->next;
	}while(a!=head->next);
	cout<<"item  not present in the list. "<<endl;
	return head;
}

void traverse(struct node *head){
	struct node *a;
	if(head==NULL)
	{
		cout<<"EMPTY..!!"<<endl;
		return ;
	}
	a=head->next;

	do{
		cout<< a->data<<" ";
		a=a->next;
	}while(a!= head->next);
	cout<<endl;

}



int main()
{
	struct node *head=NULL;
	head=empty(head, 6);
	head=begining(head, 4);
	head=begining(head,2);
	head=end(head,8);
	head=end(head,12);
	head=after(head, 10,8);


	traverse(head);
	return 0;
}
