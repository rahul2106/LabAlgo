#include<stdio.h>
int main()
{
		int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c];int f=0;
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		if(a[i][j]>0)
		f++;
      	}
		
	}
	if(f*2>(r*c))
	printf("Not a Sparse Matrix\n");
	else
	{
	
	printf("%d %d %d\n",r,c,f);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(a[i][j]>0)
		printf("%d %d %d\n",i,j, a[i][j]);
		
	    }
	   
	}
}
}

	
	


