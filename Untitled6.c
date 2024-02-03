#include<stdio.h>
int main()
	

{
	int i,n,ele,a[100];
	printf("Enter the size of the array:-\n");
	scanf("%d",&n);
	printf("Enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the elemnt to be searched\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
	
	if(a[i]==ele)
	break;
    }

    
	if(i<n)
 printf("%d is found at %dth position\n",ele,i+1);
		
	
	else
		printf("The couldnot be found",ele);

}
