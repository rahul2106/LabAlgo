#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node* right;
	
};
struct node* new_node(int key)
{
	struct node* root=(struct node*)malloc(sizeof(struct node));
	root->data=key;
	root->left=NULL;
	root->right=NULL;
	return root;	
	
}
int Ceil(struct node* root,int key)
{
	if(root==NULL)
	return -1;
	if(root->data==key)
	return key;
	if(root->data<key)
	return Ceil(root->right,key);
	int ceil=Ceil(root->left,key);
	return(ceil>=key)?ceil:root->data;
}
int main()
{
	struct node* root=new_node(10);
	root->left=new_node(5);
	root->right=new_node(11);
	root->left->left=new_node(1);
	root->left->right=new_node(6);
	printf("%d",Ceil(root,9));
}
