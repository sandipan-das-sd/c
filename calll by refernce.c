#include<stdio.h>
void sum(int*,int*);
int main()

{
int a,b;
printf("Enter the value of a and b:-\n")	;
scanf("%d%d",&a,&b);
printf("Inside the calling function the value of a and b is:%d%d\n",a,b);
sum(&a,&b);//call by refernece
}
void sum(int*x,int*y)
{
	int a,b;
*x=a;
*y=b;
printf("The value of called function is:-\n%d %d",*x,*y);	
}
