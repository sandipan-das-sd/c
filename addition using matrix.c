#include<stdio.h>
int main()
{
	int i,j,k,m,n;
	int a[2][2],b[2][2],c[2][2];
	
	printf("ENTER THE VALUE OF 1ST MATRIX:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Enter the value of second matrix:-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
	}
	printf(" THE 1ST MATRIX IS :-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
			
		}
		printf("\n");
		
	}
	printf(" THE 2ND MATRIX IS :-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
			
		}
		printf("\n");
		
	}
	printf(" THE SUMMATION  IS :-\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
			
		}
		printf("\n");
		
	}
	
return 0;	
}
