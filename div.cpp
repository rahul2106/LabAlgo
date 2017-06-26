#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[50];
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];	}
	int c[n+1];
	for(i=0;i<=n;i++)
	c[i]=0;
	for(i=0;i<n;i++)
	++c[a[i]];
	int x=-1;
	for(i=0;i<n;i++)
	{
	if(x<c[i])
	x=c[i];	
	}
	if(x<m)
	printf("%d",m-x);
	else 
	printf("0");
	
}
