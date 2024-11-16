#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Original array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    modify(arr, 10);
    printf("Modified array:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
void modify(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 3;
    }
}
