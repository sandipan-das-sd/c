#include<stdio.h>
#include<string.h>

	struct student
	{
	 char name[500];
	 int roll_no;
	 float marks;
	};
	
	
int main()
{
	struct student s1;
	printf("Enter the name of the student:-");
	gets(s1.name);
	printf("Enter the roll no:-");
	scanf("%d",&s1.roll_no);
	printf("Enter the marks:");
	scanf("%f",&s1.marks);
	
	struct student s2;
	printf("Enter the name of second the student:-");
	gets(s2.name);
	printf("Enter the roll no:-");
	scanf("%d",&s2.roll_no);
	printf("Enter the marks:");
	scanf("%f",&s2.marks);
	printf("The students details are:-\n%s\n%d\n%f\nn%s\n%d\n%f\n",s1.name,s1.roll_no,s1.marks,s2.name,s2.roll_no,s2.marks);
	
}
