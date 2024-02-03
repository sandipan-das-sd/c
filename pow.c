//Calculating power of a number
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
//	a memory block denotes the number
// b memory block denotes the power 
// and c memory block denots the result
	printf("Enter the number:-\n");
	scanf("%d",&a);
	printf("Enter the power of that number:-\n");
	scanf("%d",&b);
	c=pow(a,b);
	printf("The result is:-\n %d",c);
	
}
