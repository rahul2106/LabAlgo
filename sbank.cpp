#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	char c[n][n];
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=getchar();
		}
	}
/*	for(i=n;i>=0;i--)
	{
		for(j=0;j<n;j++)
		{
			printf("%c",c[j][i]);
		}
	}*/
}
