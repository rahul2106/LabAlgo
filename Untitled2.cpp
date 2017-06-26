#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* newNode(int data)
{
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	return new_node;
	
}
void insert (struct node** head,struct node *new_node)
{
	struct node* current=NULL;
	if(*head==NULL||(*head)->data>=new_node->data)
	{
	new_node->next=*head;
	*head=new_node;	
	}
	else
	{
		current=*head;
		while(current->next!=NULL||current->next->data<new_node->data)
		
		{
			current=current->next;
		}
		new_node->next=current->next;
		current->next=new_node;
		
	}
}

void print(struct node* head)
{struct node* temp=head;
	while(temp!=NULL)
	{
		printf("%d,",temp->data);
		temp=temp->next;
	}
}
int main()
{
    
    struct node* head = NULL;
    struct node *new_node = newNode(5);
    insert(&head, new_node);
    new_node = newNode(10);
    insert(&head, new_node);
    new_node = newNode(7);
    insert(&head, new_node);
    new_node = newNode(3);
    insert(&head, new_node);
    new_node = newNode(1);
    insert(&head, new_node);
    new_node = newNode(9);
    insert(&head, new_node);
    printf("\n Created Linked List\n");
    print(head);
 
    return 0;
}
