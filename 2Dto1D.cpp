#include<stdio.h>
int main()
{
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&a[i][j]);
		
	}
	int b[r*c];
	int k=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		b[k]=a[i][j];
		k++;
	}
	}
	for(i=0;i<r*c;i++)
	printf("%d ",b[i]);	
	
	
	
}
