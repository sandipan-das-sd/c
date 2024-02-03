#include<stdio.h>
#include<string.h>
#define size 200
int main()
{
	char str[size];
	puts("Enter your string:-\n");
	gets(str);
	printf("The string is:-\n%20s",str);
}
