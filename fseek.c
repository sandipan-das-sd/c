#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[100];
	char ch;
	
	FILE*fp=NULL;
	fp=fopen("abc.text","r");
	if(fp==NULL)
	{
		printf("Error!");
		exit(0);
	}
	printf("Enter the string:-\n");
	gets(str);
	printf("You entered:-\n");
	puts(str);
	fprintf(fp,"%s",str);
	printf("Enter the character:-\n");
	scanf("%c",&ch);
	fseek(fp,3,SEEK_SET);
	ch=fgetc(fp);
	fprintf(fp,"%c",ch);
	fputs(str,fp);
	fclose(fp);
}
