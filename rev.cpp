#include<iostream>
using namespace std;
static int rev(int n)
 {
 int r=0;
 	while(n>0)
 	{
 		int d=n%10;
 		r=r*10+d;
 		n/=10;
	 }
	 return r;
 }
int main()
{
	int t;
	scanf("%d",&t);
	int i=0;
	for(i=0;i<t;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		a=rev(a);
		b=rev(b);
		int s=rev(a+b);
		printf("%d\n",s);
	}
}
 
