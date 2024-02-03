#include<stdio.h>
int main()
{
    int r1,r2,c1,c2, m1[100][100],m2[100][100], mul[100][100],i,j,k;

    printf("Enter number of rows for First Matrix:\n");    
    scanf("%d",&r1);    
    printf("Enter number of columns for First Matrix:\n");     
    scanf("%d",&c1); 
    printf("Enter number of rows for Second Matrix:\n");    
    scanf("%d",&r2);    
    printf("Enter number of columns for Second Matrix:\n");     
    scanf("%d",&c2);
    if(c1!=r2)
    {
        printf("Matrices Can't be multiplied together");
    }
    else
    {
       printf("Enter first matrix elements \n");    
        for( i=0;i<r1;i++)    
        {    
            for( j=0;j<c1;j++)    
            {    
                scanf("%d",&m1[i][j]);    
            }    
        }    
        printf("Enter Second matrix elements\n");    
        for(i=0;i<r2;i++)    
        {    
            for(j=0;j<c2;j++)    
            {    
                scanf("%d",&m2[i][j]);    
            }    
        }    
        
        for( i=0;i<r1;i++)    
        {    
            for( j=0;j<c2;j++)    
            {    
                mul[i][j]=0; 
 
                // Multiplying i’th row with j’th column
                for( k=0;k<c1;k++)    
                {    
                    mul[i][j]= mul[i][j]+ m1[i][k]*m2[k][j];    
                } 
            }    
        }    
        printf("Multiplied matrix\n");     
        for(i=0;i<r1;i++)    
        {    
            for(j=0;j<c2;j++)    
            {    
                printf("%d ",mul[i][j]);    
            }    
            printf("\n");    
        } 
    }
    return 0;  
}
