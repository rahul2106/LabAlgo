#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* next;
	
};
void print(struct node*);
void push(struct node**,int);
struct node* new_node(int data)
{
	struct node* newnode=(struct node*)malloc (sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}
void merge(struct node* A,struct node* B)
{
	struct node* tmp=(struct node*)malloc (sizeof(struct node));
	if(A==NULL)
	tmp=B;
	if(B==NULL)
	tmp=A;
	
	print(tmp);
}
void push(struct node** A,int data)
{
	struct node* new_node=(struct node*)malloc (sizeof(struct node));
	new_node->data=data;
	new_node->next=*A;
	*A=new_node;
}
void print(struct node*head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
int main()
	{
		struct node* head=new_node(1);
		head->next=new_node(3);
		head->next->next=new_node(5);
		struct node* head2=new_node(2);
		head2->next=new_node(4);
		head2->next->next=new_node(6);
		print(head);
		printf("\n");
		print(head2);
		printf("\n");
		merge(head,head2);
		
	}
