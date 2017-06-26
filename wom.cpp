#include <stdio.h>

int main(void) {
int i=10;
while(i--)
{int a,b;
scanf("%d%d",&a,&b);
int K,L;
L=(a-b)/2;
K=L+2;
printf("%d\n%d\n",K,L);
}
	return 0;
}
