#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;
int eD(string x,string y,int m,int n)
{
	int i=0,j=0;
	int dp[m+1][n+1];
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]=j;
			else if(j==0)
			dp[i][j]=i;
			else if(x[i-1]==y[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
		}
	}
	return dp[m][n];
}
int main()
{
	int m,n;
	string x, y;
	scanf("%s%s",&x,&y);
	m=x.length();
	n=y.length();
	int i=eD(x,y,m,n);
    printf("%d",i);
}
