#include <iostream>
using namespace std;
int max(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		return a;
	}
	if(b>a)
	{
		if(b>c)
		return b;
	}
	return c;
	
}

int main() {
	
	// your code here
	int n;
	scanf("%d",&n);
	int a[n];
	int t=0;
	while(t<n)
	{
		scanf("%d",&a[t++]);
	}
	t=0;
	for(t=0;t<n-2;t++)
	{
		int m=max(a[t],a[t+1],a[t+2]);
		printf("%d ",m);
	}
	
	

	return 0;
}
