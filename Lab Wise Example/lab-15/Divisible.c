/*3. Count number of elements divisible by 3 in array.*/
#include <stdio.h>

int main()
{
  int arr[5], i, n = 0,n1;
  printf("Enter Five element in Array :\n");
  for (i = 0; i < 5; i++)
  {
    printf("Enter a number :");
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < 5; i++)
  {
    if (arr[i]%3==0)
    {
      n++;
    }
  }
  printf("Count of 3 divisible number is: %d",n);
  return 0;
}