#include<stdio.h>
void sum(int x,int y)
{
int a,b;
printf("Enter the 1st number:-\n");
scanf("%d",&a);
printf("Enter the 2nd number:-\n");
scanf("%d",&b);
printf("The summation is:-%d",a+b);
void sub(int x,int y)
{
	int a,b;
printf("Enter the 1st number:-\n");
scanf("%d",&a);
printf("Enter the 2nd number:-\n");
scanf("%d",&b);
printf("The subtraction  is:-%d",a*b);
}
void display(void (*fptr)(int,int ))
{
	fptr(a,b);
}
void main()
{
	display(sum);
	display(sub);
}
}
