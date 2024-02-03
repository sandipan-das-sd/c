#include<stdio.h>
int main()
{
	char str1[30];
	char str2[30];
	printf("Enter string 1:-\n");
	scanf("%s",str1);
	scanf("Enter string 2:-\n");
	printf("%s",str2);
	int i,j;
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++,i++)
		{
			
			str1[i]=str2[j];
		
		}
	}
	str1[i]='\0';
	printf("The concatination of the string is:-%s",str1);
}
