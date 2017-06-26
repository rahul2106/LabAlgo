
#include<stdio.h>
int main()
{ int a[10];int t=0;int c=1,i=0;
  for(i =0;i<10;i++)
  scanf("%d",&a[i]);
while(c>0&&c<8)
{

    
	printf("\nMenu\n");
	printf("1.Right Circular Shift\n");
	printf("2.Left Circular Shift\n");
	printf("3.Reverse\n");
	printf("4.Search\n");
	printf("5.Sorted?\n");
	printf("6.Duplicates\n");
	printf("7.Traverse\n");
	scanf("%d",&c);
	switch(c)
	{
	
	case 1:
	{ int t=a[9];
			for(i=9;i>0;i--)
		{
			a[i]=a[i-1];
			
		}a[0]=t;
		
		break;
	}
	case 2:
		{
		int t=a[0];
			for(i=0;i<10;i++)
		{
			a[i]=a[i+1];
			
		}a[9]=t;
		
			break;
			
		}
	case 3:
		{
			for(i=0;i<5;i++)
			{
				int t=a[i];
				a[i]=a[9-i];
				a[9-i]=t;
			}
			
						break;
		}
		case 4:
			{
			printf("Enter element to be searched");
			int n;
			bool f=false;
			
			scanf("%d",&n);
			for(i=0;i<10;i++)
			if(a[i]==n)
			f=true;
			if(f)
			printf("Search successful");
			else
			printf("Search Unsuccessful");
			
			break;
		}
		case 5:
			{
			int s=0, d=0;
			for(i=0;i<9;i++)
		    {
		    	
			if(a[i]>=a[i+1])
			{
			s++;
		    }
			if(a[i]<=a[i+1])
			{
			
			d++;
		    }
		    }
		    if(d==9||s==9)
			printf("Sorted");
			else
			printf("Not Sorted");
		
	     	break;
	     }
	     case 6:
	     { bool f=false;
	     	for(i=0;i<9;i++)
		{
			int j;
			for(j=i+1;j<10;j++)
			if(a[i]==a[j])
			f=true;
		}
	      if(f)
	      printf("Duplicates present");
	      else
	      printf("Duplicates Absent");
		break;
	}
	case 7:
	{
			for(i=0;i<10;i++)
		printf("%d ",a[i]);
		break;
	}
}
}
	
		
	
	
}
