#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("Enter highest power of x\n");
	scanf("%d",&n);
	int x[n+1],y=n+1;
	n++;
	while(n--)
	{
		printf("Enter coefficient of x^%d:\n",n);
		scanf("%d",&x[n]);
	}
	int v;
	printf("Enter value of x:");
	scanf("%d",&v);
	int s=0;
	while(y--)
	{
		s=(s+x[y])*v;
	}
	s/=v;
	printf("Value of the given Expression:%d",s);
	return 0;
}
