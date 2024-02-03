#include<stdio.h>
#define size 10

int binary_search(int arr[size],int x,int n);
int main()
{
	
	
	int n, x, arr[size], i;
	printf("Enter the size of the array:-\n");
	scanf("%d",&n);
	printf("Enter the element of the array:-\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    printf("\nThe element of the array is:-\n");
	for(i=0;i<n;i++)
	{
	printf(" %d ",arr[i]);
    }
    printf("\nEnter the element to find:-\n");
    scanf("%d",&x);
//   binary_search(arr,x,n);
	  if (binary_search(arr,x,n))
    {
    	printf("Element found in the array..\n");
	}
	else
	{		printf("Element is not found in the array!!\n");
	}
}
//function defination
int binary_search(int arr[size],int x,int n)
{

int left=0;
int right=n-1;
int mild;
	while(left<=right)
	{
		mild=(left+right)/2;
		if(arr[mild]==x)
		{
			printf("The value %d is found at index %d\n ",x,mild);
			return 1;
		}

    
		else if(arr[mild]<x)
		{
			left=mild+1;
		}
		else if(arr[mild]>x)
		{
			right=mild-1;
		}
		
	}
	printf("\nElement is  not found in the array\n");
		return 0;
}
