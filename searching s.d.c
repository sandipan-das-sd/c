#include<stdio.h>
int main()
{
	int a[20],n,i,el;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the array elemnt:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elemnt to be seacheed:-\n");
	scanf("%d",&el);
	for(i=0;i<n;i++)
	{
		if(a[i]=el){
			break;
		}
		if(i<n)
		{
			printf("%d is present %d",el,i+1);
		}
		else{
		printf("Element doesnot exist");
	}
	}
	
}
