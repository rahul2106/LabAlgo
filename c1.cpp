#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k,x;
		cin>>n>>k;
		long int p=0;
		long long int i=1,j=1;
	    if(k<n)
	    x=k;
	    else
	    x=n+1;
	    p=(x+1)*(x-1)/4;
	    if(((x+1)*(x-1))%4==0)
		 cout<<p<<endl;
		 else
		 cout<<p+1<<endl;
	}
}
