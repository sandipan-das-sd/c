#include<stdio.h>
int main() {
    int i,j,n,temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements of the array: \n", n);
    
    //taking elements from user
    for ( i = 0; i <n; i++) {
    	printf("Enter the %dth elementh:-",i);
        scanf("%d", &arr[i]);
    }
    
   //printing the sorting array
    printf("The elements of the array are:\n ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    	temp=arr[i];
    	j=i-1;
    	while(j>=0&&arr[j]>temp)
    	{
    		arr[j]=arr[j+1];
    		j--;
    		
		}
		arr[j+1]=temp;
	}
	printf("The  sorting elements of the array are:\n by insertion sort\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
