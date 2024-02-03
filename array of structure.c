#include<stdio.h>
#include<string.h>
struct student
{
	char name[30];
	int roll_no;
	float cgpa;
};
int main()
{
	int n,i;
	struct student s[n];
	printf("Enter the size of the struture:-\n");
	scanf("%d",&n);
	printf("Enter the informations of students:-\n");
	printf("Enter the students name:-\n");
	for(i=0;i<=n;i++)
	{
    gets(s[i].name);
	}
	printf("Enter the students roll_no:-\n");
	for(i=0;i<=n;i++)
	{
    scanf("%d\n",&s[i].roll_no);
	}
printf("Enter the students cgpa:-\n");
	for(i=0;i<=n;i++)
	{
    scanf("%f\n",&s[i].cgpa);
	}
	//printing the structure
	printf("The students details are:-\n");
	for(i=0;i<=n;i++)
	{
    printf("%s\n%d\n%f\n",s[i].name,s[i].roll_no,s[i].cgpa);
	}
}
