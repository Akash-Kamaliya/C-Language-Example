/*2. Find missing numbers of sequence using array.(in a sequence 1,2,4,5,7,8,10, Missing
numbers are 3,6,9)*/
#include <stdio.h>

int main()
{
  int n = 7, i, j, count = 0;
  int arr[n];
  printf("Enter 1 to 10 number elements: \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0, j = 1; i < n, j <= 10;)
  {
    if (arr[i] == j)
    {
      i++;
      j++;
    }
    else
    {
      printf("Missing number is :%d\n", j);
      j++;
    }
  }
  return 0;
}
