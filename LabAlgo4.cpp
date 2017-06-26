#include<iostream>
using namespace std;
int fact(int a)
{
	if(a<=1)
	return 1;
	else return fact(a-1)*a;
	
	}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<((fact(a)/(fact(b)*fact(a-b))));
}
