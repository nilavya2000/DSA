#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;

void create()
{
	struct node *temp, *ptr;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		cout<<"Out of memory.. !! \n";
		exit(0);
	}
	cout<<"Enter the data value for the node : ";
	cin>>temp->data;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		ptr = head;
		while(ptr->next !=NULL)
			ptr=ptr->next;
		ptr->next=temp;
	}
}

void display()
{
	struct node *ptr;
	if(head == NULL)
	{
		cout<<"Empty !!";
	}
	else
	{
		ptr = head;
		cout<<"\n Elements are : ";
		while(ptr!=NULL)
		{
			cout<<"\t"<<ptr->data;
			ptr=ptr->next;
		}
	}
}


int main()
{
	int ch;
	while(1)
	{
		cout<<"\n MENU \n";
		cout<<"1.Create\n";
		cout<<"2.Display\n";
		cout<<"3.exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
				break;
			default:
				cout<<"wrong choice .!!";
				break;
		}
	}
	return 0;
}
