/*2. Calculate without using power function and without using multiplication.*/
#include <stdio.h>

int main()
{
  int n, n1, result = 1;

  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter a number :");
  scanf("%d", &n1);
  for (int i = 0; i < n1; i++)
  {
    int temp = 0;
    for (int j = 0; j < result; j++)
    {
      temp += n;
      // printf("temp is :%d\n", temp);
    }
    result = temp;
    // printf("result is :%d\n", result);
  }
  printf("%d^%d = %d\n", n, n1, result);
  return 0;
}