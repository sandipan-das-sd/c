#include<stdio.h>
int main()
{
	int r1,c1,r2,c2, m1[100][100],m2[100][100],mul[100][100],i,j,k;
	printf("Enter the row of 1st matrix:-\n");
	scanf("%d",&r1);
	printf("Enter the coloumn of 1st matrix:-\n");
	scanf("%d",&c1);
	printf("Enter the row of 2nd matrix:-\n");
	scanf("%d",&r2);
	printf("Enter the column of 1st matrix:-\n");
	scanf("%d",&c2);
	if(c1!=r2)
	{
		printf("Matrix can't multiplied\n");
	}
	else{
		printf("Enter the elements of first matrix:-\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("Element at [%d][%d]\n",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		printf("Enter the elements of second matrix:-\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("Element at [%d][%d]\n",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		//multiplication logic started
		printf("The Multiplication is:-\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				mul[i][j]=0;
				for(k=0;k<c1;k++)
				{
				mul[i][j]=mul[i][j]+m1[k][j]*m2[i][k];
				}
				
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
		printf("%d ",mul[i][j]);
		}
		printf("\n");
	}
}
}
	
	


