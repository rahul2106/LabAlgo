#include<stdio.h>
#include<stdlib.h>
struct node
{
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
		printf("%d  ",temp->data);
		temp=temp->next;
	}
	
}
void rem(struct node* head)
{
	struct node* temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data==(temp->next)->data)
		{
			temp->next=temp->next->next;
		}
		else
		temp=temp->next;
	}
}
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
   
    /* Let us create a sorted linked list to test the functions
     Created linked list will be 11->11->11->13->13->20 */
    push(&head, 20);
    push(&head, 13);
    push(&head, 13);  
    push(&head, 11);
    push(&head, 11);
    push(&head, 11);                                    
 
    printf("\n Linked list before duplicate removal  ");
    print(head); 
 
    /* Remove duplicates from linked list */
    rem(head); 
 
    printf("\n Linked list after duplicate removal ");         
    print(head);            
   
    return 0;
}
