#include<iostream>
#include<string.h>

using namespace std;
int min(int x,int y,int z)
{
	return min(min(x,y),z);
}
int editDist(char A[],char B[],int m,int n)
{
	if(m==0)
	return n;
	if(n==0)
	return m;
	if(A[m-1]==B[n-1])
	return editDist(A,B,m-1,n-1);
	else
	return (1+min(editDist(A,B,m,n-1),editDist(A,B,m-1,n),editDist(A,B,m-1,n-1)));	
}
int main()
{
	int i=010;
	while(i--)
	{
		char A[2000],B[2000];
		cin>>A;
		cin>>B;
		cout<<editDist(A,B,strlen(A),strlen(B))<<endl;
		
		
	}
}
