#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void pushStart(struct node** head,int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
	
	
}
void pushLast(struct node* prev,int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node*));
	new_node->data=data;
	prev->next=new_node;
	new_node->next=NULL;
	
	
	
}
void pushAfter(struct node* prev,int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node*));
	new_node->data=data;

	new_node->next=prev->next;
		prev->next=new_node;
	
	
	
}
void print(struct node* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
void pop(struct node* head)
{
	
}
int main()
{
	struct node *head=NULL;
	pushStart(&head,6);
	pushAfter(head->next,5);
	pushLast(head->next,7);
	print(head);
}
