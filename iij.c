#include<stdio.h>
int main()
{
	int i,j,n,a[100],pos,s;
	printf("Enter the size of the array:-\n");
	scanf("%d",&n);
	printf("Enter the value of the array:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[pos]>a[j])
			{
			pos=j;
	     	}
		}
		if(pos!=i)
		{
			s=a[i];
			a[i]=a[pos];
			a[pos]=s;
			
		}
	}
	printf("\nThe sorted array is:-\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
