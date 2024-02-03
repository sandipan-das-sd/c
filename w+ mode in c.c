#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("abc.text","w+");
	if(fp==NULL)
	{
		printf("Error!");
		exit(0);
	}
	char str[100];
	char s;
	printf("Enter the character:-\n");
	scanf("%c",&s);
	printf("Enter the words which you wanted to store in w+ mode:-\n");
	gets(str);
	printf("You entered:-\n");
	puts(str);
	rewind(fp);
	printf("Succesfully added in w+ mode");
	while(!feof(fp))
	{
		s=fgetc(fp);/*char declaration of s*/
		printf("%c",s);
	}
	fputs("%s",fp);//for string we use fputs in file
	fputc("%c",fp);//for character we use fputc in file
	fclose(fp);
}
