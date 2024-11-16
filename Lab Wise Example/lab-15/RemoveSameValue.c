/*3. Given an integer array nums and an integer val, remove all occurrences of val in nums inplace.
The order of the elements may be changed. Then return the number of elements in
nums which are not equal to val.*/
#include <stdio.h>

int main()
{
  int nums[] = {3, 2, 2, 3, 4, 3, 5};
  int val = 3;
  int n = sizeof(nums) / sizeof(nums[0]);
  int i, j = 0;
  for (i = 0; i < n; i++)
  {
    if (nums[i] != val)
    {
      nums[j] = nums[i];
      j++;
    }
  }
  printf("Array after removal of %d:\n", val);
  for (i = 0; i < j; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\nNumber of elements not equal to %d: %d\n", val, j);
  return 0;
}
