#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("abc.text","a");
	if(fp==NULL)
	{
		printf("Error!");
		exit(0);
	}
	char str[100];
	printf("Enter the words which you wanted to append:-\n");
	gets(str);
	printf("You entered:-\n");
	puts(str);
	fprintf(fp,"\n %s",str);
	printf("Succesfully append\n");
	fclose(fp);
	
	}
