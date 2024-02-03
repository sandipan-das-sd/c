#include<stdio.h>
int main()
{
int a[100],i,ele,n;
printf("enter the array size\n");
scanf("%d",&n);
printf("enter the array elements\n");

   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

printf("enter the element to be searched\n");
scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
    if(a[i]==ele)
    break;
    }
    if(i<n)
    printf("%d is present at position %d\n",ele,i+1);
    else
    printf("%d is not present",ele);
}
