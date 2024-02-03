#include<stdio.h>
void swapByvalue(int a,int b)
{
	int c;
    c=a;
    a=b;
    b=c;
}
int main()
{
	int x,y;
	printf("Enter The first value :");
	scanf("%d",&x);
	printf("Enter the second value:");
	scanf("%d",&y);
	printf("Before swaping the value of a and b is:-\n %d,%d\n",x,y);
	swapByvalue(x,y);
    printf("After  swaping the value of a and b is:-\n %d,%d\n",x,y);
}
