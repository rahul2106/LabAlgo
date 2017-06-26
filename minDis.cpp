#include <stdio.h>
#include<string.h>
int min(int a,int b,int c)
{
	if(a<b)
	{
		if(a<c)
		return a;
	}
	if(b<a)
	{
		if(b<c)
		return b;
	}
	return c;
	
}
int MinDist(char c1[],char c2[],int m,int n)
{
	if(m==0)
	return n;
	if(n==0)
	return m;
	if(c1[m-1]==c2[n-1])
	return MinDist(c1,c2,m-1,n-1);
	return 1+min(MinDist(c1,c2,m,n-1),MinDist(c1,c2,m-1,n),MinDist(c1,c2,m-1,n-1));
}
int main(void) {
	// your code here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	char c1[3000],c2[3000];
	scanf("%s",&c1);
	scanf("%s",&c2);
	printf("%d",MinDist(c1,c2,strlen(c1),strlen(c2)));
	}
	
	
	

	return 0;
}
