#include<stdio.h>
int main()
{
	int array[10][10],i,j,m,n;
	printf("Enter the no of rows:-\n");
	scanf("%d",&m);
	printf("Enter the no of coloumn:-\n");
	scanf("%d",&n);
	printf("Enter the matrix element\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the elements in [%d][%d]\n",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("The matrix  is:-\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
}
