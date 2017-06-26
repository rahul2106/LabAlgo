#include <stdio.h>

int main(void) {
	// your code here
	int t;
	scanf("%d",&t);
	printf("\n");
	while(t--)
	{
		int NG, NM,G=0,M=0;
		scanf("%d%d",&NG,&NM);
		int g[NG],m[NM];
		int i=0;
		for(i=0;i<NG;i++)
		scanf("%d",&g[i]);
		for(i=0;i<NM;i++)
		scanf("%d",&m[i]);
		for(i=0;i<(NG<NM?NG:NM);i++)
		m[i]>g[i]?M++:G++;
		if(G>M)
		printf("Godzilla\n\n");
		else if(G<M)
		printf("MechaGodzilla\n\n");
		else
		printf("uncertain");
		
	}

	return 0;
}
