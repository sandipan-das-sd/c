       /*
       ***
      *****
     *******
    *********/
    #include <stdio.h>

int main() {
    int i, j,n;
    printf("Enter the no:-\n");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=2*n-1;j++)
		
    	{
		if(j>=6-i&&j<=4+i){
			printf("*");
		}
		else{
			printf(" ");
		}
		printf("\n");
		}
		
		
	}
	return 0;
}
    
