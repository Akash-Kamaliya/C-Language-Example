/*2. Swap two arrays using pointers..*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter the number of elements in the arrays: ");
  scanf("%d", &n);
  int arr1[n], arr2[n];
  printf("Enter %d elements for the first array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter %d elements for the second array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr2[i]);
  }
  int *ptr1 = arr1;
  int *ptr2 = arr2;

  int *tempPtr = ptr1;
  ptr1 = ptr2;
  ptr2 = tempPtr;
  printf("\n");
  printf("First array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr1 + i));
  }
  printf("\nSecond array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(ptr2 + i));
  }
  printf("\n");
  return 0;
}
