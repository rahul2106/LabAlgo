#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {printf("\n");
    int n;
    scanf("%d",&n);
        int ans=0,temp,sum=0,arr[n],i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }

        temp=sum/n;
        if(temp*n==sum)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
        
    }
    return 0;
}
