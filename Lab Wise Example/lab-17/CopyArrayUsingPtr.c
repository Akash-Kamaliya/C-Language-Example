/*1. Copy one array to another using pointers.*/
#include <stdio.h>

int main()
{
  int n, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr1[n], arr2[n];
  printf("Enter %d elements for the source array:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  int *ptr1 = arr1;
  int *ptr2 = arr2;
  for (i = 0; i < n; i++)
  {
    *(ptr2 + i) = *(ptr1 + i);
  }
  printf("Elements in the destination array:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(ptr2 + i));
  }
  printf("\n");
  return 0;
}
