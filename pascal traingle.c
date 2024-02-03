#include<stdio.h>
int fact(int);
int main()
{
	int i,j,k,n,fact;
	printf("Enter the number of rows:-\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=2*n-i;k>=i;k--)
		{
		printf(" ")	;
		}
		for(j=0;j<=i;j++)
		{
			printf("%d ",fact(j)/fact(i)*fact(i-j));
		}
		printf("\n");
	}
	int fact(int x)
	{
		int fact;
		int j,f=1;
		for(j=1;j<=x;j++)
		{
			f=f*j;
		}
		return f;
	}
}
