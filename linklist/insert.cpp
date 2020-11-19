#include <iostream>
#include <stdio.h>
using namespace std;

struct node{
	int info;
	struct node *next;
};

struct node *head=NULL;

void create()
{
	struct node *temp, *ptr;
	temp = (struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\n out of memeory..!! \n");
		exit(0);
	}
	printf("Enter the value of the node: ");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(head==NULL)
		head=temp;
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
			ptr=ptr->next;
		ptr->next = temp;
	}

}




int main()
{

}
