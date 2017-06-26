#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void push(struct node**head,int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
	
}

void print(struct node* head)
{
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}

void deleteNode(struct node* head)
{
	if(head==NULL)
	return ;
	struct node* prev=head;
	struct node* current=head->next;
	while(prev!=NULL&&current!=NULL)
	{
		prev->next=current->next;
		
		prev=prev->next;
		if(prev!=NULL)
	    current=prev->next;
	}
}
int main()
{
	struct node* head=NULL;
	push(&head,5);
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	print(head);
	printf("\n");
	deleteNode(head);
	print(head);
	
}
	

