    /* * * * *
      * * * *
       * * *
        * *
         *
         *
        * *
       * * *
      * * * *
     * * * * */
     #include<stdio.h>
     int main()
     {
     	int i,j,k,n;
     	printf("Enter the no:-\n");
     	scanf("%d",&n);
    for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
	   {
	   	printf(" ");
	   }
	for(j=1;j<=i;j++)
	   {
		printf("* ");
	   }
	   
	   printf("\n");
	} 
	//second pattern 
	 for(i=2;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
	   {
	   	printf(" ");
	   }
	for(j=1;j<=i;j++)
	   {
		printf("* ");
			
	   }
	   printf("\n");

	} 
	
	return 0;
	 }
