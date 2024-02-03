#include<stdio.h>
int main()
{
	int i;
	char str1[30];
	char str2[30];
	printf("Enter string 1:-\n");
    gets(str1);
    
    for(i=0;str1[i]!='\0';i++){
	 str2[i]=str1[i];
	
}
str2[i]='\0';
	printf("The string str2  is:-%s",str2);
}
