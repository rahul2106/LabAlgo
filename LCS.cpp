#include<iostream>
#include<algorithm>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	char a[m],b[n];
	scanf("%s%s",&a,&b);
	int l[m][n];
	int i=0,j=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0&&j==0)
			l[i][j]=0;
			else if(a[i-1]==b[j-1])
			l[i][j]=l[i-1][j-1]+1;
			else 
			{
				if(l[i-1][j]>l[i][j-1])
				l[i][j]=l[i-1][j];
				else
				l[i][j]=l[i][j-1];
							}
		}
	}
	int in=l[m][n];
	printf("%d",in);
	
}
