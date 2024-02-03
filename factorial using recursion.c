#include<stdio.h>
int factorial (int x);//function prototype
int main()
{
int a,fact,f;
printf("enter a number");
scanf("%d",&a);
fact =factorial(a);//function call
printf("the result is %d",f);
return 0;
}

 int factorial(int a)//function definition
 {
 
	int f=1,i;
	for (i=1;i<=a;i++)
	{
		f=f*i;
		 
		 return (f);//return statement
}
}



