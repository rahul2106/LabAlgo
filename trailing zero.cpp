#include<stdio.h>
#include<math.h>
int main()

{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		a%=10;
		if(a==0||a==1||a==5||a==6)
		printf("%d\n",a);
		else
		{
			if(a==4||a==9)
			b%=2;
			else
			b%=4;
			a=pow(a,b);
			a%=10;
			printf("%d\n",a);
		}
	}
}
