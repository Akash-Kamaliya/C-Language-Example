/*Insert new value in the sorted array.*/
#include <stdio.h>
int main()
{
  int arr[100] = {10, 20, 30, 40, 50};
  int n = 5;
  int newValue = 35;
  int i, position;
  for (i = 0; i < n; i++)
  {
    if (arr[i] > newValue)
    {
      position = i;
      break;
    }
  }
  if (i == n)
  {
    position = n;
  }
  for (i = n; i > position; i--)
  {
    arr[i] = arr[i - 1];
  }
  arr[position] = newValue;
  n++;
  printf("Array after inserting %d:\n", newValue);
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
