#include <stdio.h>
int fib(int n)
{
	if(n<=1)
	return 1;
	
	return fib(n-1)+fib(n-2);
}

int main(void) {
	// your code here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m;
		scanf("%d%d",&n,&m);
		long long int s=0;
		int i=0;
		for(i=n;i<=m;i++)
		{
			s+=fib[i];
		//	printf("%d ",fib(i));
		}
		s%=1000000007;
		printf("%d\n",s);
	}

	return 0;
}
