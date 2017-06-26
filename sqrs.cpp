#include <stdio.h>
#include<math.h>

int main(void) {
	// your code here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%d",&n);
		int f=0;
		int i=3,x=n;
		while(n%2==0)
		{
			n/=2;
		}
		for(i=3;i<=sqrt(n);i=i+2)
		{
			int c=0;
				while(n%i==0)
				{printf("%d ",i);
					n=n/i;
					if(i%4==3)
					c++;
					
					
				}
				if(c%2==0)
			    {
				
				f=1;
			    break;
			    }
		}
		if(f==1)
		printf("Yes\n");
		else
		printf("No\n");
	}

	return 0;
}
