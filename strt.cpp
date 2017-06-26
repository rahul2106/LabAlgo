#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void push(struct node** head,int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
}
void print(struct node* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
int main()
{
	struct node* head=NULL;
	push(&head,15);
	push(&head,20);
	push(&head,26);
	push(&head,39);
	print(head);
}
