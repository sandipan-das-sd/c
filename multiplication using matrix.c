#include<stdio.h>
int main()
{
	int i,j,k,r1,r2,c1,c2,m1[100][100],m2[100][100] ,mul[100][100];
	printf("Enter the row no of 1st matrix:-\n");
	scanf("%d",&r1);
	printf("Enter the coloumn no of 1st matrix:-\n");
	scanf("%d",&c1);
	printf("Enter the row no of 2nd matrix:-\n");
	scanf("%d",&r2);
	printf("Enter the coloumn no of 2nd matrix:-\n");
	scanf("%d",&c2);
	if(r1!=c2){
		printf("mULTIPLICATION CANT POSSIBLE");
		
	}
	else{
	
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("1st matrix is:-\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",m1[i] [j]);
		}
		printf("\n");
	}
	printf("Enter the elemnts of 2nd matrix:-\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&m1[i] [j]);
		}
	}
	printf("2nd matrix is:-\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d",m1[i] [j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			mul[i][j]=0;
		for(k=0;k<c1;k++)
		{
			mul[i][j]=mul[i] [j]+m1[i] [k]*m2[k] [j];
		}
	}
}
printf("Multiplication matrix is:-\n");
for(i=0;i<r1;i++){
	for(j=0;j<c2;j++)
	{
		printf("%d",mul[i] [j]);
	}
	printf("\n");
}
}
}
