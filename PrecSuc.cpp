#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
	int key;
	struct node* left;
	struct node* right;
	
};
struct node* new_node(int key)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->key=key;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
	
}

void find(struct node* root,struct node* pre,struct node* suc,int key)
{
	if(root==NULL)
	return ;
	if(root==key)
	{
		if(root->eft!=NULL)
		{
			struct node* tmp=root->left;
			while(tmp->right!=NULL)
			{
				tmp=tmp->right;
				
			}
			pre=tmp;
		}
		if(root->right!=NULL)
		{
			struct node* tmp=root->right;
			while(tmp->left!=NULL)
			{
				tmp=tmp->left;
			}
			suc=tmp;
		}
		return ;
	}
	if(root->key>key)
	{
		suc=root;
		find(root->left,pre,suc,key);
		return;
	    	
	}	
	if(root->key<key)
	{
		pre=root;
		find(root->right,pre,suc,key);
		return;
	}

	
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
