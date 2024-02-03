#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("test.txt","w");
	char str[50];
	int i;
	
	if(fp==NULL)
	{
		printf("File doesn't exist.......'");
		exit(0);
	}
	
	printf("Enter the string:-\n");
	gets(str);
	printf("The string is:-\n");
	puts(str);
	for(i=0;i!=strlen(str);i++)
	{
		fputc(str[i],fp);
	}
	fclose(fp);
}
