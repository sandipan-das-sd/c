#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else{
		return gcd(b,b%a);
	}
}
int gcdN(int arr[], int n)
{
int i,temp;


temp=arr[0];
for(i=0;i<n;i++){

temp=gcd(temp,arr[i]);
if(temp==1)
{
	return 1;
}
else{
	return temp;
}
}
}
int main()
{
	int n,i;
	printf("Enter the number of element:-\n");
	scanf("%d",&n);
	int arr[n];
    printf("Enter %d numbers: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp=gcdN(arr,n);
    printf("GCD is:-%d",temp);
    
}
