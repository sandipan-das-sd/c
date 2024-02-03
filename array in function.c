#include<stdio.h>
#include<stdlib.h>
int avg(int[],int);
int main()
{
	int size;
	int average;
int marks[5]={2,3,4,5,6};
size=sizeof(marks)/sizeof(marks[0]);
average=avg(marks,size);
printf("average is:%d",average);
} 
int avg(int marks[],int size)
{
	int i,sum=0,average=0;
	for(i=0;i<size;i++)
	{
		sum=sum+marks[i];
	}
	average=sum/size;
	return average;
}
//passing array as an argument to a function in c
