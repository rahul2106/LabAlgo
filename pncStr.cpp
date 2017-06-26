#include<bits/stdc++.h>
void swap(char *a,char *b)
{
	char t=*a;
	*a=*b;
	*b=t;
}
void permute(char *x,int l,int r)
{
if(l==r)
printf("%s\n",x);
else
{
	int i=0;
	for(i=l;i<=r;i++)
	{
		swap((x+l),(x+i));
		permute(x,l+1,r);
		swap((x+l),(x+i));
	}
}
	
}
int main()
{
	char x[]="aabc";
	permute(x,0,3);
}
