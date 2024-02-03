#include<stdio.h>
#include<string.h>
void modify(char[],char[]);
int main()
{
char s1[20]="";
char s2[20]="";
printf("Enter the character in string s1\n");
scanf("%s",&s1);
printf("Enter the character in string s2\n");
scanf("%s",&s2);
modify(s1,s2);
}
void modify(char s1[20],char s2[20]){
	int i,l1=0,l2=0;
	for(i=0;s1[i]!='\0';i++)
	{
		l1=l1+1;
	}
	for(i=0;s2[i]!='\0';i++)
	{
		l2=l2+1;
	}
	printf("which position in string 1 you wqant to change\n");
	scanf("%d",i);
	printf("Enter the character:-\n");
	scanf("%c",&s1[i]);
	s1[2]='D';
	s2[3]='E';
	
	printf("The length of the character of s1 is:-\n%d\n",l1);
	
	printf("The length of the character of s2 is:-\n%d\n",l2);
	printf("After modyfying character in s1 is\n%s\n",s1);
	
	printf("After modyfying character in s2 is\n%s\n",s2);
	
}

