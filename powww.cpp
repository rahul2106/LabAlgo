#include <iostream>
using namespace std;
bool pal(int n)
{
	bool f=false;
	int r=n,x=0;
	while(r>0)
	{
	int d=r%10;
	x=x*10+d;
	r/=10;
	}
	if(x==n)
	f=true;
	
	return f;
}

int main() {
	
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	while(n<1000000)
	{
		if(pal(++n))
		{
			cout<<n<<"\n";
			break;
		}
	}
	
}

	return 0;
}
