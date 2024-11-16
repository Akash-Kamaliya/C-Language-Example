/*4. Search element in array.*/
#include <stdio.h>

int main()
{
  int arr[5], i, n = 0, n1;
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number :");
    scanf("%d", &arr[i]);
  }
  printf("Wich Number You want to search in array:");
  scanf("%d", &n1);
  for (i = 0; i < 5; i++)
  {
    if (arr[i] == n1)
    {
      n++;
    }
  }
  if (n != 0)
    printf("Yes ,Searched number is exist in this array");
  else
    printf("No ,Searched number is not exist in this array");
  return 0;
}