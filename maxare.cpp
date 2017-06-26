#include <stdio.h>
int mod3(long int n)
{
	return ((n%4)==3)?1:0;
}

int main(void) {
	// your code here
int t;
scanf("%d",&t);
while(t--)
{
	long long int n;
	scanf("%lld",&n);
	long long int i=0;
	while(n%2==0)
	{
		n>>1;
	}
	int c=0,f=0;
	for(i=3;i*i<=n;i++)
	{
		while(n%i==0)
		{
		n/=i;
		if(mod3(i))
		c++;
		}
		if(c%2==0)
		{f=1;
			printf("Yes\n");
			break;
		}
	}
	if(f==0)
	printf("No\n");
	
}
	return 0;
}
