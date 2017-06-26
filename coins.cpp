#include<iostream>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
    {
    	int n,k;
    	scanf("%d%d",&n,&k);
    
    	int p[k+1];
    	
    	int i=0;
    	for(i=0;i<=k;i++)
    	p[i]=1;
    	i=0;
    	int a[n];
		while(i++<n)
		{
		
		scanf("%d",&a[i]);
    	
        }
        i=0;
        while(i++<n)
        {
        	p[a[i]]=0;
		}
    int j=0,x=0,t=k;
    i=0;
    while(t>x)
    {
    	if(p[i]==1)
    	{
		x+=i++;
		j++;
        }
        
	}
	cout<<j<<endl;
	}
	
	
}
