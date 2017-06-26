#include <stdio.h>

int main(void) {
	// your code here
int t;
scanf("%d",&t);
int i=1;
while(t--)
{
	float n;
	scanf("%f",&n);
 float s=.25+4*n*n;
 printf("Case %d: %.2f\n",i++,s);
}
	return 0;
}
