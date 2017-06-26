#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int r,g,b;
	cin>>r>>g>>b;
	long long int s;
	
    if(r>0&&b>0&&g>0) 
    {
    	
	int x=r%3,y=g%3,z=b%3;
	if((x+y+z==3)&&(x!=y||x!=z||y!=z))
		s=(r+g+b)/3-1;
		else
		s=(r+g+b)/3;
	}
	
    else 
      
      {
          if(r>=3||g>=3||b>=3)
             {
              
          int mx=max(max(r,g),b);
          s=mx/3;
          }
          else
              s=0;
      }
        
	
	cout<<s;
	
}
