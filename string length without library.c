#include<stdio.h>
int main()
{
	int i,count=0;
	char str[30];
	printf("Enter a string:-\n");
    gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	printf("The string length is:-%d",count);
}
