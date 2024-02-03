#include<stdio.h>
int main()
{
		int n;
	int a[30]={};
	int i;

	int sum=0;
	printf("Enter the size of the arraay:-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
{
printf("Enter the elements a[%d]\n",i);
scanf("%d",&a[i]);
}
printf("You Entered:-\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
/*2,4,5,6=2+4+5+6=17*/
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("\nThe summation is:-\n%d",sum);


	}
