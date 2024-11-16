/*1. Count total duplicate elements in an array.*/
#include <stdio.h>

int main()
{
  int n, i, j,sm, count = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: \n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (arr[i] == arr[j])
      {
        count++;
        sm=arr[i];
        break;
      }
    }
  }
  printf("Total number of duplicate elements: %d\n", count);
  return 0;
}
