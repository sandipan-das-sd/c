#include<stdio.h>
#include<string.h>
int main()
{
	int i,l;
	char s1[30],c;
	printf("Enter the character in the string:-\n");
	gets(s1);
	l=strlen(s1);
	for(i=0;i<=l/2;i++)	
	{
		c=s1[i];
		s1[i]=s1[l-1-i];
		s1[l-1-i]=c;
	}
	printf("The reverse of the string is:-\n %s",s1);
	return 0;
}
