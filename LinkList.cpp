// on Linked List
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
// A linked list node
struct node
{
  int data;
  struct node *next;
};
void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
   new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}
 unsigned int PRNG()
{
    static unsigned int seed = 5323;
     seed = (8253729 * seed + 2396403);
    return seed  % 32768;
}

 void insertAfter(struct node* prev_node, int new_data)
{
     struct node* new_node =(struct node*) malloc(sizeof(struct node));
   
   if (prev_node == NULL)
    {
    	push(&prev_node,new_data);
    }
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
void printList(struct node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}
int main()
{
	int n;
	srand(time(NULL));
	scanf("%d",&n);
	struct node* A = NULL;
	struct node* B = NULL;
	struct node* C = NULL;
	int x=PRNG()%100;
	bool m=false;
	
	while(n--)
	{
		int t=PRNG()%200;
		int r=PRNG()%100;
		if(m==true)
		{
			if (C== NULL)
    {
    	push(&C,t);
    	
    }else
	
			insertAfter(C,t);
			continue;
		}
		if(r<=x)
		{
		if (A== NULL)
    {
    	push(&A,t);
    }else
		insertAfter(A,t);
	}
	
		else if(r>x)
		{
		if (B== NULL)
    {
    	push(&B,t);
    }else
	
		insertAfter(B,t);
	}
	
		if(r>30&&r<60)
		m=true;
		
	}
	printf("++Part a:\nList A:");
	printList(A);
	printList(C);
	printf("\nList B:");
	printList(B);
	printList(C);
	printf("\n");
	
	printf("++Part b:\nInitial Part of A:");
	printList(A);
	printf("\nInitial Part of B:");
	printList(B);
	printf("\nCommon Part:");
	printList(C);
	
}
