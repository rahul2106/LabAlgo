#include<stdio.h>
struct node{
	char c;
	struct node* next;
};
void push(struct node **head, char c)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->c=c;
	new_node->next=*head;
	*head->new_node;
}
void print(struct node* head)
{
	while(head!=NULL)
	{
		printf("%c ", head->data);
		head=head->next;
	}
}
void pal(struct node* head)
{
	struct node* fast=head;
	struct node* slow=head;
	struct node* mid;
	while(fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	if(fast!=NULL)
	mid=slow;
}
