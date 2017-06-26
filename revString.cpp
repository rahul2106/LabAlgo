#include<iostream>
#include<string>
using namespace std;
void rev(string A)
{
cout<<A<<endl;
A.push_back(' ');
int l=A.length(),j=0;
string B="";
for(int i=0;i<l;i++)
{
	if(A[i]==' ')
	{
	 B=B+A.substr(i-1,j);
	 j=i;
	
	}
	else
	{
		if(A[j+1]==' ')
		j++;
	}
	
}
cout<<B;
	
}
int main()
{
	string A="the sky is blue";
rev(A);
	
}
