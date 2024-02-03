#include <stdio.h>

// Function to calculate the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Function to calculate the GCD of multiple numbers
int findGCD(int arr[], int n) {
	int i;
    int result = arr[0];
    for ( i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
        if (result == 1) {
            // If GCD is 1, no need to continue since GCD of any number with 1 is 1
            return 1;
        }
    }
    return result;
}

int main() {
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d numbers: ", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int gcdResult = findGCD(arr, n);
    printf("GCD of the numbers is: %d\n", gcdResult);
    
    return 0;
}

