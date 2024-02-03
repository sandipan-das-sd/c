#include<stdio.h>
int sum(int,int);         // return type  name( arguments,…..);   
void main()
{

int a=12,b=8,c;
c=sum(a,b);
printf(“Sum is :-%d”,c);
}
int sum(int x, int y)
{
int z;
z=x+y;
//return z;
}
