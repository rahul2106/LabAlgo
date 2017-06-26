#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	
	// your code here
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		string s;
		scanf("%s",&s);
		bool v=next_permutation(s.begin(),s.end());
		if(v==false)
		cout<<"ERROR\n";
		else
		cout<<s<<endl;
	}

	return 0;
}
