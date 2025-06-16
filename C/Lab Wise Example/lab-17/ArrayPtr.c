/*5. Store n elements in an array and print the elements using pointer.*/
#include <stdio.h>
int main()
{
  int n, i;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int *ptr = arr;
  printf("Array elements using pointer:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(ptr + i));
  }
  printf("\n");
  return 0;
}
