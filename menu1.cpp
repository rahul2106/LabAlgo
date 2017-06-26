#include<stdio.h>
int main()
{ int a[10];int t=0;int c=1,i=0;
while(c>0&&c<8)
{

    
	printf("Menu\n");
	printf("1.Insert At Back\n");
	printf("2.Insert at Front\n");
	printf("3.Insert at Given Index\n");
	printf("4.Remove At Back\n");
	printf("5.Remove at Front\n");
	printf("6.Remove at Given Index\n");
	printf("7.Traverse\n");
	scanf("%d",&c);
	switch(c)
	{
	
	case 1:
	{
			for(i=0;i<t;i++)
		{
			a[i+1]=a[i];
			
		}t++;
		scanf("%d",&a[0]);
		break;
	}
	case 2:
		{
			scanf("%d",&a[t]);
			t++;
			break;
			
		}
	case 3:
		{
			int l;
			scanf("%d",&l);
			for(i=l;i<t;i++)
		{
			a[i+1]=a[i];
			
		}t++;
			scanf("%d",&a[l]);
			break;
		}
		case 4:
			t=t-1;
			break;
		case 5:
			{
			
			for(i=0;i<t;i++)
		    {
			a[i]=a[i+1];
			
	     	}
	     	t--;
	     	break;
	     }
	     case 6:
	     {
			 	int l;
	     	scanf("%d",&l);
	     	for(i=l;i<t;i++)
		{
			a[i]=a[i+1];
			
		}
		t--;
		break;
	}
	case 7:
	{
			for(i=0;i<t;i++)
		printf("%d ",a[i]);
		break;
	}
}
}
	
		
	
	
}
