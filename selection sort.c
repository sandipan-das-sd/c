#include <stdio.h>

int main() {
    int size,i,min,j,c,n;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements of the array: \n", size);
    
    //taking elements from user
    for ( i = 0; i < size; i++) {
    	printf("Enter the %dth elementh:-",i);
        scanf("%d", &arr[i]);
    }
    
   //printing the sorting array
    printf("The elements of the array are:\n ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //selection sort
    	for(i=0;i<size;i++)
	{
	 min=i;
	 for(j=i+1;j<size;j++)
	 {
	 	if(arr[j]<arr[min])
	 	{
	 		min=j;
	 		
		 }
	 }
	 if(min!=i)
	 {
	 	c=arr[i];
	 	arr[i]=arr[min];
	 	arr[min]=c;
	 }
	}
	printf("The  sorting elements of the array are:\n by selection sort\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
