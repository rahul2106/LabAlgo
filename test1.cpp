#include<iostream>
using namespace std;
static void func(int[],int,int,int);
int main()
{
        int n,q,l,r,x;
        scanf("%d%d",&n,&q);
        int a[n];
        int i=0;
        while(i<n)
        {
          scanf("%d",&a[i]);
        }
        while(q--)
        {
            scanf("%d%d%d",&l,&r,&x);
            func(a,l,r,x);
           
        }
    }
    static void func(int a[],int l,int r,int x)
    {
        int c=0;
        while((l-1)<r)
        {
            if(a[l-1]<x)
            c++;
            l++;
        }
        printf("%d",c);
    }

            
