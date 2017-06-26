#include<iostream>
#include<climits>
using  namespace std;
int max(int a,int b)
{
	return (a>b)?b:a;
}
int Apple(int price[],int n)
{
	int val[n+1];
	val[0]=0;
	int i,j;
	for(i=1;i<=n;i++)
	{
		int max_val=INT_MAX;
		for(j=0;j<i;j++)
		{
			max_val=max(max_val,price[j]+val[i-j-1]);
		}
		val[i]=max_val;
	}
	return val[n];
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k;
		scanf("%d%d",&n,&k);
		int a[k];
		int i=0;
		for(i=0;i<k;i++)
		scanf("%d",&a[i]);
		int x=Apple(a,k);
		if(x<0)
		printf("-1\n");
		else
		printf("%d",x);
	}
}
