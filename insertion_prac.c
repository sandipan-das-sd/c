#include<stdio.h>
#include<stdlib.h>
#define size 20
void insert_array(int arr[size],int n);
int main()
{
	int arr[size],n,i;
	printf("Enter the array size:-\n");
	scanf("%d",&n);
	printf("Enter the array elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The array elements without sorting is:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	insert_array(arr,n);
	return 0;
}
void insert_array(int arr[size],int n)
{
	int i,temp,j;
	for(i=0;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	printf("The array after sorting\n");
   for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); 	
}
}
