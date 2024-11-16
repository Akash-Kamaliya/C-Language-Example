
#include <stdio.h>

int main()
{
  int n, i, j, temp, c = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n], arr1[n];
  printf("Enter %d elements: \n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0, j = (n - 1); i < n, j >= 0; j--, i++)
  {
    arr1[j] = arr[i];
  }
  for (i = 0; i < n; i++)
  {
    if (arr1[i] == arr[i])
    {
      c++;
    }
  }
  if (c == n)
  {
    printf("Given number is palindrom number:");
  }
  else
  {
    printf("Sorry , given number is not a palindrom number :");
  }
  printf("\n");
  return 0;
}