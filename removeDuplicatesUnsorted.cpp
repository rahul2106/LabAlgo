#include<iostream>
#include<unordered_set>
using namespace std;

struct node{
	int data;
	struct node* next;
	
};
struct node* newNode(int data)
{
	node* temp=new node;
	temp->data=data;
	temp->next=NULL;
	return temp;
}
void print(struct node* head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
void rem(struct node* head)
{
	unordered_set<int> seen;
	struct node* current=head;
	struct node* prev=NULL;
	while(current!=NULL)
	{
		if(seen.find(current->data)!=seen.end())
		{
			prev->next=current->next;
			
		}
		else
		{
			seen.insert(current->data);
			prev=current;
		}
		current=prev->next;
	}
}
int main()
{
	struct  node* head=newNode(10);
	head->next=newNode(15);
	head->next->next=newNode(10);
	head->next->next->next=newNode(12);
	head->next->next->next->next=newNode(15);
	print(head);
	rem(head);
	print(head);
}
