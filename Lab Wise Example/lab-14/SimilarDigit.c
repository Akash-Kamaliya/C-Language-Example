/*1. Count total duplicate elements in an array.*/
#include <stdio.h>

int main()
{
  int n, i, j, k,count = 0;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int arr[n];
  int sm[n];
  printf("Enter %d elements: \n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0,k=0;k<n, i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if ((arr[i] == arr[j])&&(arr[i]!=sm[k]))
      {
        count++;
        sm[k] = arr[i];
        k++;
        break;
      }
    }
  }
  printf("Total number of duplicate elements: %d\n", count);
  printf("Similar Elements are...........\n");
  for(k=0;k<count;k++)
  {
    printf("%d , " , sm[k]);
  }
  return 0;
}
