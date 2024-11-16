/*3. Given an integer array nums sorted in non-decreasing order, remove the duplicates inplace
such that each unique element appears only once. The relative order of the elements
should be kept the same. Then return the number of unique elements in nums.*/
#include <stdio.h>

int main()
{
  int n;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  int nums[n];
  printf("Enter %d elements in non-decreasing order: \n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &nums[i]);
  }
  if (n == 0)
  {
    printf("Number of unique elements: 0\n");
    return 0;
  }
  int j = 0;
  for (int i = 1; i < n; i++)
  {
    if (nums[i] != nums[j])
    {
      j++;
      nums[j] = nums[i];
    }
  }
  int k = j + 1;
  printf("Number of unique elements: %d\n", k);
  printf("Array after removing duplicates: ");
  for (int i = 0; i < k; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\n");
  return 0;
}
