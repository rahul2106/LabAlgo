#include <stdio.h>
#include <math.h>

int main(void) {
	// your code here
int t;
scanf("%d",&t);
while(t--)
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b==0)
	{
		printf("%d\n",a%10);
		continue;
	}
	
	int x=1;
	int l=a%10;
	if(l==2||l==3||l==7||l==8)
	x=4;
	else if(l==4||l==9)
	x=2;
	else
	{
		printf("%d",l);
		continue;
	}
	b%=x;
	if(b==0)
	b=4;

	x=pow(l,b);
	x%=10;
	printf("%d\n",x);
}

	return 0;
}
