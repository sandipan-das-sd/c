#include<stdio.h>
int main()
{
	int math[6]={10,20,30,40,50,60,};
	printf("The no of mathematics of all students  is:-\n");
	int i;
	for(i=0;i<6;i++)
	{
		printf("%d\n",math[i]);
		printf("%d\n",&math[i]);
	}
}
