#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i=0,j=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int l[n];
	for(i=0;i<n;i++)
	l[i]=1;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]>a[j]&&l[i]<l[j]+1)
			l[i]=l[j]+1;
		}
	}
	int max=-1;
	sort(l,l+n);
    printf("%d",l[n-1]);
	}
