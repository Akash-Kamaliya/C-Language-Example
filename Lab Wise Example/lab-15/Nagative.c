/*2. Count total number of negative elements in array..*/
#include <stdio.h>

int main()
{
  int arr[5], i, n = 0;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number :");
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 5; i++)
  {
    if (arr[i] < 0)
    {
      n++;
    }
  }
  printf("Total Negative Number is :%d", n);
  return 0;
}