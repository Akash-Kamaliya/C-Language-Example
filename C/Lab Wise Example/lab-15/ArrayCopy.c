/*1. Copy all elements of one array to another.*/
#include <stdio.h>

int main()
{
  int arr1[5], arr2[5], i, j;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number :");
    scanf("%d", &arr1[i]);
  }
  for (i = 0; i < 5; i++)
  {
    arr2[i] = arr1[i];
  }
  for (j = 0; j < 5; j++)
  {
    printf("%d\n", arr2[j]);
  }
  return 0;
}