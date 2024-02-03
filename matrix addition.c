
#include<stdio.h>
int main()
{
  int i,j;
    int a[2][3];
    int b[2][3];
    int c[2][3];
    printf("Enter the first array element:-\n");
    for( i=0;i<2;i++)
        {
        for(j=0;j<3;j++)
        {
                scanf("%d",&a[i][j]);


        }
    }
	
	//1ST MATRIX SCANNING IS OVER HERE//

printf("Enter second matrix:-\n");

for( i=0;i<2;i++)
    {
for( j=0;j<3;j++)
{
scanf("%d",&b[i][j]);
            }
    }
    // 2ND MATRIX SCANNING IS OVER HERE//
    printf("\n The first matrix is:-\n");
     for( i=0;i<2;i++)
        {
        for( j=0;j<3;j++)
        {
                printf("%d",a[i][j]);


        }
        printf("\n");
        }


        //1ST MATRIX PRINTING IS OVER HERE//
        printf("\n The second matrix is:-\n");

         for( i=0;i<2;i++)
        {
        for( j=0;j<3;j++)
        {
      printf("%d",b[i][j]);
      }
       printf("\n");
}



        //2nd matrix printing is over here//



// matrix addition logic started here//

printf("\nThe summation is:-\n");
for( i=0;i<2;i++)
{
for( j=0;j<3;j++)
{
c[i][j]=a[i][j]+b[i][j];


printf("%d",c[i][j]);
            }
              printf("\n");


    }

    return 0;
        }

