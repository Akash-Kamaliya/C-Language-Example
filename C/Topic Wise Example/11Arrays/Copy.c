/*program to copy one array into another in reverse order:*/
#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], i, j;
    printf("\nEnter five element in an array:\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", arr1[i]);
    }
    for (i = 0, j = 4; i <= 4; i++, j--)
    {
        arr2[j] = arr1[i];
    }
    printf("Element in reverse order :\n");
    for (j = 0; j <= 4; j++)
    {
        printf("%d ", arr2[j]);
    }
    return 0;
}