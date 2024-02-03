#include<stdio.h>
void sum(void);
void main()
{
	int a,b;
	printf("Enter the value of a:-\n");
	scanf("%d",&a);
	printf("Enter the value of b:-\n");
	scanf("%d",&b);
	sum();
}
void sum(void)
{
	int x,y,sum=0;
	sum=x+y;
	printf("sum=%d",sum);
}
//function with no arguments and no return type
