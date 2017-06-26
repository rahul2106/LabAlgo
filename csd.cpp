#include <bits/stdc++.h>
using namespace std;
int min(int a,int b,int c)
{
	if(a<b)
	{
		if(a<c)
		return a;
	}
	if (b<a)
	{
		if(b<c)
		return b;
		
	}
	return c;
}

int eDit(string S1,string S2,int m,int n)
{
	int dp[m+1][n+1];
	int i=0,j=0;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i==0)
			dp[i][j]=j;
			else if(j==0)
			dp[i][j]=i;
			else if(S1[i-1]==S2[j-1])
			dp[i][j]=dp[i-1][j-1];
			else
			dp[i][j]=1+min(dp[i-1][j], 
                                   dp[i][j-1],  // Remove
                                   dp[i-1][j-1]);
		}
	}
	return dp[m][n];
}
int main(void) {
	// your code here
int t;
cin>>t;
while(t--)
{
	string S1,S2;
	cin>>S1;
	cin>>S2;
	int a=S1.length();
	int b=S2.length();
	cout<<eDit(S1,S2,a,b);
}
	return 0;
}
