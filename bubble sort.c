//bubble sort
#include <math.h>
#include <stdio.h>

void main()
{
  int i, s, j, n,a[100],pos;
   printf("Enter the number of array elements\n");
    scanf("%d", &n);
    printf("Enter the array elements :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nInput array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      pos=i;
      for(j=i+1;j<n;j++)
      {
        if(a[pos]>a[j])
        {
         pos=j;
        }
      }
      if(pos!=i)
       {
         s=a[i];
         a[i]=a[pos];
         a[pos]=s;

       }
      }
      printf("\nSorted array is...\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
   }
