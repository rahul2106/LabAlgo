#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
struct node*  push(struct node** head,int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head;
	*head=newnode;
	return newnode;
}
void print(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
}
bool isPresent(struct node* head,int data)
{struct node* temp=head;
	while(temp!=NULL)
	{
		if(data==temp->data)
		return 1;
		temp=temp->next;
	}
	return 0;
}
struct node* Intersection(struct node* head,struct node* y)
{
	struct node* x=head;
	struct node* result=NULL;
	while(x!=NULL)
	{
		if(isPresent(y,x->data))
		{
			push(&result,x->data);
			
		}
		x=x->next;
	}
	return result;
	
}
struct node* Union(struct node* head,struct node* head2)

{struct node* x=head,*y=head2;
	struct node* result=NULL;
	while(x!=NULL)
	{
		push(&result,x->data);
		x=x->next;
	}
	while(y!=NULL)
	{   if(isPresent(result,y->data)==0)
		push(&result,y->data);
		y=y->next;
	}
	 return (result);
}
int main()
{
	struct node* head=NULL,* head2=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,3);
	
	push(&head2,1);
	push(&head2,5);
	push(&head2,2);
	print(head);
	cout<<endl;
	print(head2);
	cout<<endl;
	struct node* unin=NULL,*Inter=NULL;
	unin=Union(head,head2);
	cout<<endl;
	Inter=Intersection(head,head2);
	print(unin);
	print(Inter);
	
}
