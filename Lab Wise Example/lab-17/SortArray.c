/*2. Sort array using pointers.*/
#include <stdio.h>

int main()
{
  int n, i, j, temp;
  int arr[100];
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);
  printf("Enter the elements of the array: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n - 1; i++) 
  {
    for (j = i + 1; j < n; j++)
    {
      if (*(arr + i) > *(arr + j))
      {
        temp = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = temp;
      }
    }
  }
  printf("Sorted array: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", *(arr + i));
  }
  return 0;
}
