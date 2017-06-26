#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);    
    (*head_ref)    = new_node;
}
void printList(struct node *head)
{
    struct node *fast = head,*slow=head,*temp;
    while(fast != NULL)
    {
        fast=fast->next->next;
        temp=slow;
        slow=slow->next;
		    }
		    printf("%d",slow->data)
}    
int main()
{
    struct node* head = NULL;
  
     push(&head, 20);
     push(&head, 4);
     push(&head, 15); 
     push(&head, 85);      
    
     printf("Given linked list\n");
     printList(head);    
     reverse(&head);                      
     printf("\nReversed Linked list \n");
     printList(head);    
     getchar();
}
