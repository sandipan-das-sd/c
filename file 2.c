#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fptr;
	fptr=fopen("student.txt","w");
	
	//data stroing in memory
	int age;
	int cgpa;
    char name[100];
    printf("Enter Your name:-\n");
    scanf("%s",name);
    printf("Enter your marks:-\n");
    scanf("%d",&cgpa);
    printf("Enter your age:-\n");
    scanf("%d",&age);
    
    //data storing in file
    fprintf(fptr,"Student name:-%s\n",name);
    fprintf(fptr,"Student age:-%d\n",age);
    fprintf(fptr,"Student CGPA:-%d\n",cgpa);
    fclose(fptr);
    
	return 0;	
	}
