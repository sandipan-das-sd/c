#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char s1[30];
	char s2[30];
	printf("Enter character s1\n");
	gets(s1);
	printf("Enter character s2\n");
	gets(s2);
	value=strcmp(s1,s2);
	if(value==0)
	{
		printf("Same");
	}
	else{
		printf("Not same");
	}
	
	
	}
	
	
