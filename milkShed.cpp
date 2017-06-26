#include <bits/stdc++.h>
using namespace std;

/*Function used for user-defined sorting,
return true if first argument should 
come before second argument in the 
sorted output*/
bool comp(pair<int,int> a,pair<int,int> b)
{
   if(a.first != b.first)
      return a.first > b.first;
   return a.second < b.second;	
}

int main() {
   ios::sync_with_stdio(false);
   
   int n,a,b;
   cin>>n;
   
   /*Making pairs of deadline and
   milk produced for each cow*/
   vector<pair<int,int> > v;
   for(int i=0;i<n;++i)
   {
      cin>>a>>b;
      v.push_back(make_pair(a,b));
   }
   /*STL sort*/
   sort(v.begin(),v.end(),comp);
   
   bool slot[n]={0};
   int ans=0;
   
   /*Job sequencing*/
   for(int i=0;i<n;++i)
      for(int j=min(n,v[i].second)-1;j>=0;--j)
      {
         if(!slot[j])
         {
            slot[j]=true;
            ans += v[i].first;
            break;
         }
      }
   cout<<ans<<"\n";
   return 0;
}
