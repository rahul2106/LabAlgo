#include<iostream>
#include<cstdlib>
#include<map>
#include<vector>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct  node* right; 
};
struct node* newnode(int data)
{
	struct node* root=(struct node*)malloc(sizeof(struct node));
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	return root;
	
}
void getVertical(map <int, vector<int> > A,int hd,struct node* root)
{
	if(root==NULL)
	return;
	A[hd].push_back(root->data);
	getVertical(A,hd-1,root->left);
	getVertical(A,hd+1,root->right);
}
void print(struct node* root)
{
	map<int,vector<int> >A;
	int hd=0;
	getVertical(A,hd,root);
	map<int,vector<int> >::iterator it;
	for(it=A.begin();it!=A.end();it++)
	{
		for(int i=0;i<it->second.size();++i)
		{
			cout<<it->second[i]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	struct node* root=newnode(1);
	
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	print(root);
}

