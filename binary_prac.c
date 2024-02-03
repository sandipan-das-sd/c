#include <stdio.h>
#define size 20

int binary_search(int x, int arr[size], int n) {
    int left = 0, right = n - 1, mid;

    while (left <= right) {
        mid = (left + right) / 2;
        if (x == arr[mid]) {
            printf("Element found at index %d\n", mid);
            return 1; // Return 1 to indicate the element was found
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    printf("Element not found in the array\n");
    return 0; // Return 0 to indicate the element was not found
}

int main() {
    int i, arr[size], x, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &x);

    if (binary_search(x, arr, n)) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }

    return 0;
}

