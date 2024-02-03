#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp=NULL;
	char ch;
	int pos;
	char str[50];
	fp=fopen("file.txt","r");
	if(fp==NULL)
    {  
	printf("Cant open file\n");
	}
	pos=ftell(fp);
	printf("%d\n",pos);
	fseek(fp,5,SEEK_SET);
	printf("%d\n",ftell(fp));
	ch=fgetc(fp);
	printf("%c",ch);
	printf("%d\n",ftell(fp));
	fscanf(fp,"%s",str);
	printf("%s",str);
	printf("%d\n",ftell(fp));
	fseek(fp,0,SEEK_END);
	printf("%d\n",ftell(fp));	
	
	fclose(fp);	
		
		
		}
