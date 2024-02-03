#include<stdio.h>
int main()
{
	int i;
	int count;
	char str[30];
	printf("Enter a string\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
    for(i=count-1;i>=0;i--)
    {
    	
	}
	printf("%c",str[i]);
}
