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
	struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void reverse(struct node** head)
{
	struct node* prev=NULL;
	struct node* current=*head;
	struct node* next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
}
bool compare(struct node* head1,struct node * head2)
{
	struct node* temp1=head1,*temp2=head2;
    while(temp1&&temp2)
    {
    	if(temp1->data!=temp2->data)
    	return 0;
    	temp1=temp1->next;
    	temp2=temp2->next;
		
	}
	return 1;
}

bool isPal(struct node* head)
{
	struct node* fast=head,*slow=head,*prev_slow,*midnode,*secnd_half;
	while(fast!=NULL&&fast->next!=NULL)
	{
		
		prev_slow=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	if(fast!=NULL)
	{
		midnode = slow;
		slow=slow->next;
	}
	secnd_half=slow;
	prev_slow->next=NULL;
	reverse(&secnd_half);
	bool res=compare(head,secnd_half);
	reverse(&secnd_half);
	if(midnode!=NULL)
	{
		prev_slow->next=midnode;
		midnode->next=secnd_half;
	}
	else
	prev_slow->next=secnd_half;

}

int main()
{
	struct node* a=NULL;
	
  push(&a, 3);
  push(&a, 5);
  push(&a, 3);
  push(&a, 2);
  if(isPal(a))
  printf("Palindrome");
  else
  printf("Not a Palindrome"); 
}


