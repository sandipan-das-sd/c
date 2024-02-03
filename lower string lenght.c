#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[30];
	printf("Enter the character in the string:-\n");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='A'&&s1[i]<='Z')
		{
			s1[i]=s1[i]+32;
		}
	}
	printf("The string is:-\n%s",s1);
}
