#include<stdio.h>
int main()
{
	int i,j,k,l,m,n;
	printf("Enter the value of n:-\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		
	
	
	for(j=n;j>=i;j--)
	{
		printf("*");
	}
	for(k=2;k<=i;k++)
	{
		printf(" ");
	}
	for(l=2;l<=i;l++)
	{
		printf(" ");
	}
	for(m=n+1;m>i;m--)
	{
		printf("*");
	}
	printf("\n");
}
}
