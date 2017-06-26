#include<stdio.h>


int main()
{
	int i=10;
	while(i--)
	{
		char A[2000],B[2000];
		int c=0;
		scanf("%s",&A);
		scanf("%s",&B);
		
		
	    int i=0;
	    for(;B[i]!='\0';i++)
	    {
	    	if(A[i]!=B[i])
	    	c++;
			
		}
		printf("%d",c);
		
		
	}
	return 0;
}
