#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,m,n;
	 char str[20]="WXYZ";
	for(i=0;i<4;i++)
	{
		for(j=i;j<=(4-i);j++)
		{
		printf(" ")	;
		}
		for(k=0;k<=i;k++)
		{
			printf(" %2c",str[k]);
		}
		printf("\n");
	}
	for(i=4;i<=(4-i);)
	
}
