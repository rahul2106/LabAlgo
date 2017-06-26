#include<iostream>
#include<algorithm>

using namespace std;
 
void distinct (string A)
{ int max=256;
int n=A.length();
	int count[max];
	int index[max];
	for(int i=0;i<max;i++)
	{
		count[i]=0;
		index[i]=n;
	}
	for(int i=0;i<A.length();i++)
	{
		char c=A[i];
	    ++count[c];
	    if(count[c]==1&&c!=' ')
	    index[c]=i;
	    if(count[c]==2&&c!=' ')
	    index[c]=A.length();
	    
	}
	sort(index,index+max);
	for(int i=0;i<max&&index[i]!=n;i++)
	cout<<A[index[i]];
}
int main()
{
	string A="Geeks for Geeks";
	distinct(A);
}
