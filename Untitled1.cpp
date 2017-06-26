#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};
void split(struct node* head,struct node** a,struct node** b)
{
struct node* fast;
struct node* slow;
if(head==NULL||head->next==NULL)
{
	*a=head;
	*b=NULL;
	
}
else
{
	slow=head;
	fast=head->next;
	while(fast!=NULL)
	{
		fast=fast->next;
		if(fast->next!=NULL)
		{
		
		slow=slow->next;
		fast=fast->next;
	    }
	}
	*a=head;
	*b=slow->next;
	
}
	
}
struct node* SortedMerge(struct node* a ,struct node* b)
{
	struct node* result=NULL;
	if(a==NULL)
	return (b);
	if(b==NULL)
	return a;
	if(a->data<b->data)
	{
		result=a;
		result->next=SortedMerge(a->next,b);
	}
	else
	{
		result=b;
		result->next=SortedMerge(a,b->next);
	}
	return result;
}

void printList(struct node *node)
{
  while(node!=NULL)
  {
   printf("%d ", node->data);
   node = node->next;
  }
}
void push(struct node** head,int data)
{
	struct node*new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
}
void merge(struct node** headR)
{struct node* head=*headR;
struct node* a=NULL;
struct node* b=NULL;
	if(head==NULL||head->next)
	return;
	split(head,&a,&b);
	merge(&a);
	merge(&b);
	*headR=SortedMerge(a,b);
	
}

int main()
{
	struct node* a=NULL;
	
	push(&a, 15);
  push(&a, 10);
  push(&a, 5); 
  push(&a, 20);
  push(&a, 3);
  push(&a, 2); 
  printList(a);
  merge(&a);
  printList(a);
}

