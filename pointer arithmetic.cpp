#include<stdio.h>
int main()
{

 int *p,*q,t=0,n,i;
 int a[20];
 p=&a[i];
 *q=3;
 q=q+2;
 
    a[20]={};
	
	printf("Enter the size of the array:-\n");
	scanf("%d",&n);
	printf("Enter the array element:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("The required summation is:-\n%d",t+*p+q);
	
}
