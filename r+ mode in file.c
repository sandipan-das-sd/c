#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("abc.text","r+");
	if(fp==NULL)
	{
		printf("Error!");
		exit(0);
	}
	char str[100];
	char s;
	printf("Enter the character:-\n");
	scanf("%c",&s);
	printf("Enter the words which you wanted to append:-\n");
	gets(str);
	printf("You entered:-\n");
	puts(str);
	fputs("%s",fp);//for string we use fputs in file
	fputc("%c",fp);//for character we use fputc in file
	fclose(fp);
}
