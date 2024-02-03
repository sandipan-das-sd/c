#include <stdio.h>

int main() {
  int arr[20], n, i, p, q = 0;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  printf("Enter %d elements in the array:\n", n);
  for (i = 0; i < n; i++) 
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter the element to search: ");
  scanf("%d", &p);

  for (i = 0; i < n; i++) 
  {
    if (arr[i] == p) 
	{
      printf("Element %d found at index %d.\n", p, i);
      q = 1;
      break;
    }
    
  }

  if ( q== 0) 
  {
    printf("Element %d not found in the array.\n", p);
  }

  return 0;
}

