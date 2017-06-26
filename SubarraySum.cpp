#include<iostream>
#include<vector>
using namespace std;
void index(vector<int> a,int sum)
{
	int size=a.size();
	int curr=a[0];
	int i=1,start=0;
	for(i=1;i<size;i++)
	{
		while(curr>sum&&start<i-1)
		{
			curr=curr-a[start++];
			
		}
		if(curr==sum)
		{
		
		printf("%d-%d",start+1,i);
		return;
	}
		if(curr<sum)
		{
			curr+=a[i];
		}
	}
	printf("No sch sum");
	
	
}

int main()
{
	vector <int> v;
 
    for (int i = 1; i <= 10; i++)
        v.push_back(i);
	int sum=9;
	index(v,sum);
}
