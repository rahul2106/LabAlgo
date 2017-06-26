#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
	
};
struct node* new_node(int key)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=key;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
	
}

struct node* insert(struct node* head,int data)
{
	if(head==NULL)
	return new_node(data);
	if(data>head->data)
	{
		head->left= insert(head->left,data);
	}
	if(data<head->data)
	{
		head->left= insert(head->right,data);
	}
	return head;
}
void inorder(struct node* head)
{   if(head!=NULL)
    {
	
	inorder(head->left);
	printf("%d ",head->data);
	inorder(head->right);
}
}
int main()
{
	struct node* root=NULL;
	insert(root,10);
    insert(root,5);
    insert(root,20);
    insert(root,30);
    insert(root,15);
    insert(root,45);
    inorder(root);
}
