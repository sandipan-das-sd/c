#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int i, degree;
	float x,sum=0,term,new,deno;
	clrscr();
	printf("Enter the value of degree:-\n");
	scanf("%d",&degree);
	x=degree*(3.414/180);
	new=x;
	deno=1;
	i=2;
	do
	{
	term=new/deno;
	new=-new*x*x;
	deno=deno*i*(i+1);
	sum=sum+term;
	}
	while
	
		(fabs(term)>=0.00001);	
	
printf("The sine of %d is %.3f\n",degree,sum);
printf("The sine function of %d is %3f",degree,sin(x));
}
