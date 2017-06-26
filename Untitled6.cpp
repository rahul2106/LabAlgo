#include<iostream>
#include<stdlib.h>
using namespace std;
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
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
struct node* intersect(struct node* head,struct node* head2)
{
	struct node* result=NULL;
	struct node** local=&result;
	while(head!=NULL&&head2!=NULL)
	{
		if(head->data==head2->data)
		{
			push(local,head->data);
			local=&((*local)->next);
			head=head->next;
			head2=head2->next;
			
		}
		else if(head->data<head2->data){
			head=head->next;
		}
		else head2=head2->next;
		
	}
	return result;
}
int main()
{
	struct node* head=NULL;
	push(&head,4);
	push(&head,3);
	push(&head,2);
	push(&head,1);
	struct node* head2=NULL;
	push(&head2,4);
	push(&head2,2);
	print(head);
	printf("\n");
	print(head2);
	printf("\n");
	struct node* inter=NULL;
	inter=intersect(head,head2);
	print(inter);
}
