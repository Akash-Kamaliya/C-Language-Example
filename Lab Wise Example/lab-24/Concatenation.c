#include <stdio.h>
#include <stdlib.h>
int *getConcatenation(int *nums, int numsSize, int *returnSize);
int main()
{
    int nums[] = {1, 2, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    int *ans = getConcatenation(nums, numsSize, &returnSize);
    if (ans != NULL)
    {
        printf("Concatenated array: ");
        for (int i = 0; i < returnSize; i++)
        {
            printf("%d ", ans[i]);
        }
        printf("\n");
        free(ans);
    }
    return 0;
}
int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    *returnSize = 2 * numsSize;
    int *ans = (int *)malloc((*returnSize) * sizeof(int));
    if (ans == NULL)
    {
        printf("Memory allocation failed!\n");
        return NULL;
    }
    for (int i = 0; i < numsSize; i++)
    {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    return ans;
}