#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] > arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

int main(void) {
	// your code here
int t;
scanf("%d",&t);
int x=0;
while(t--)
{
	int b, f;
	scanf("%d%d",&b,&f);
	int m[f];
	
	int i=0;
	while(i<f)
	{
		scanf("%d",&m[i++]);
	}
	selectionSort(m,f);
	i=0;
	int s=0;
	while(i<f)
	{
		s=s+m[i];
		if(s>=b)
		{i++;
			break;
		}
		i++;
	}
	
	printf("Scenario #%d:\n",++x);
	if(i<f&&s>=b)
	printf("%d\n",i);
	else
	printf("impossible\n");
		
}return 0;
}
	

