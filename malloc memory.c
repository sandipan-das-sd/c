#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int n;
	int i;
	printf("Enter the size of n:-\n");
	scanf("%d",&n);
	ptr=(int*) malloc(n*sizeof(int));
	printf("Enter the address of at the memory:-\n");
	for(i=0;i<=n;i++)
	{
	printf("Value at ptr[%d]\n",i);	
	scanf("%d",&ptr);
    }
	for(i=0;i<=n;i++)
	{
	printf("Value at ptr[%d]",i);	
	printf("\n%d",ptr);
    }      
}
