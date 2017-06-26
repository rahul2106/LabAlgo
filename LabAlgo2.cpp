#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	int t;
	int s=0;
	for(t=1;t<n;t++)
	{
		if(n%t==0)
		s=s+t;
	}
	if(s==n)
	printf("YES");
	else
	printf("NO");
}
