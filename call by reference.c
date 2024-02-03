#include<stdio.h>
void swapByreference(int*x,int*y)
{
 int c;
 c=*x;
 *x=*y;
 *y=c;
}
int main()
{
	int a,b;
	printf("Enter the 1st number:-\n");
	scanf("%d",&a);
	printf("Enter the 2nd number:-\n");
	scanf("%d",&b);
	printf("Before swapping the value of a and b is :\n%d %d\n",a,b);
	swapByreference(&a,&b);
	printf("After swapping the value of a and b is:-\n%d %d\n",a,b);
	
}
