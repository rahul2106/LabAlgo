#include<iostream>
#include<algorithm>
using namespace std;
struct busy{
	int s ;
	int e;
};
void bus(busy a[],int n)
{
	int i=0;
	int x=1;
	int j=0;
	
	for(i=1;i<n;i++)
	{
		if(a[i].s>=a[j].e)
		{
		x++;
		j=i;
	}
	}
	printf("%d",x);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		busy a[n];
		int i=0;
		for(i=0;i<n;i++)
		scanf("%d%d",&a[i].s,&a[i].e);
		bus(a,n);
		
	}
}

