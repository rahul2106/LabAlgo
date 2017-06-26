#include <bits/stdc++.h>
using namespace std;

int main() {
   int n,flag=1,x;
   scanf("%d",&n);
   while(n)
   {
      flag=1;
      stack<int> s;
      vector<int> v;
      for(int i=0;i<n;++i)
      {
         scanf("%d",&x);
         
         /* Pop till either the stack is empty
         or stack top is greater than the present
         number */
         
         while(s.size() && s.top()<x)
         {
            /*Pop an element and add to vector*/
            
            v.push_back(s.top());
            s.pop();
         }	
         s.push(x);
      }	
      
      /*Pop all elements from stack
         and add to vector*/
      
      while(s.size())
      {
         v.push_back(s.top());
         s.pop();
      }
      
      /* If the vector is sorted then 
      the answer is yes else no
      This loop checks if vector is 
      sorted or not */
      
      for(int i=0;i<v.size();++i)
      {
         if(v[i]>i+1)
         {
            /* Flag is made zero
            when not sorted */
            flag=0;
            break;
         }
      }
      if(flag)
         printf("yes\n");
      else
         printf("no\n");
      scanf("%d",&n);	
   }
   return 0;
}
