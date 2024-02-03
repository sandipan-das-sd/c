#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char ch;
int i;
char str[200];
	FILE *fp=NULL;
	fp=fopen("file.txt","r");
	if(fp==NULL)
	{
		printf("Error ocuure!!!");
		exit(0);
	}
/*	while(!feof(fp))
	{
		ch=fgetc(fp);
		printf("%c",ch);
	}*/  
	while(!feof(fp)){
		
	
	fgets(str,5,fp);
		printf("%s",str);
	}
	fclose(fp);
}
