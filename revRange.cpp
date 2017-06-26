#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void push(struct node** head,int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=*head;
	*head=newnode;
}
void print(struct node* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

struct node* rev(struct node* head,int k)
{
	struct node* current=head;
	struct node* prev=NULL;
	struct node* next=NULL;
	int count=0;
	while(current!=NULL&&count<k)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
		count++;
	}
	if(next!=NULL)
	head->next=rev(next,k);
	
	return prev;
}
int main()
{
	struct node* head=NULL;
	push(&head,6);
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	print(head);
	printf("\n");
	head=rev(head,3);
	print(head);
}
