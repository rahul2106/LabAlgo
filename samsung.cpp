#include<iostream>
#include<cmath>
using namespace std;
int fib(int n)

{
int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
int gcd(int a,int b)
{

	if(a==0)
	return b;
return gcd(b%a,a);
}
void callback(int a[],int l,int r)
{
	int g=fib(a[l]);
	int x;
	for(int i=l+1;i<=r;i++)
	{
	x=fib(a[i]);
	g=gcd(x,g);
	
	}
	long long int y =pow(10,9)+7;
	y=g%y;
	printf("%d\n",y);
}
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n];
	
	int l,r;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
		callback(a,l-1,r-1);
	}
	
}
