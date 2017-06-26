#include <stdio.h>
#include<string.h>

int main(void) {
	// your code here
int t;
scanf("%d",&t);
while(t--)
{
	int n,c;
	scanf("%d%d",&n,&c);
	bool a[n+1];
	memset(a,1,n+1);
	int i=2,j=i,x=c;
	for(i=2;i<=n+1;i++)
	{
		if(a[i]==1)
		{x=(x==0)?1:0;
		for(j=i;j<=n+1;j+=i)
		{
			if(a[j]==1)
			a[j]=0;
		}
		}
	}
	if(x==1)
	printf("Airborne wins.");
	else
	printf("Pagfloyd wins.");
	
	
}
	return 0;
}
