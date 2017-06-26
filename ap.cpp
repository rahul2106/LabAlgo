#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		int i=0;
		while(i<n)
		{
			scanf("%d",&a[i++]);
		}
		int c=0;
		i=0;
		int j=n-1;
		while(i<j)
		{
			if(a[i++]>a[j--])
			c++;
		}
		printf("%d",c);
	}
	
}
