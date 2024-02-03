#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the number:-");
	scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			for(k=2*n-2*i;k>=1;k--)
			{
				printf(" ");
				
			}
			for(j=1;j<=(2*i)-1;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
	return 0;
}
