#include <stdio.h>

int main(void) {
	// your code here
int t;
scanf("%d",&t);
long long int n[t];
int i=0;
for(i=0;i<t;i++)
{
	scanf("%d",&n[i]);
}
long long int x=0,y=0,c;
for(i=0;i<t;i++)
{
	
	x=x^n[i];
	
}
printf("%d",x);
	return 0;
}
