#include <stdio.h>
void bubbleSort(int arr[], int n);
void printArry(int arr[], int n);
int main()
{
    int arr[] = {4, 3, 5, 2, 1};
    printf("Before Sorting :\n");
    printArry(arr, 5);
    bubbleSort(arr, 5);
    printf("\n");
    printf("After Sorting using bubble sort:\n");
    printArry(arr, 5);
    return 0;
}
void bubbleSort(int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        k = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
                k++;
            }
        }
        if (k == 0)
        {
            break;
        }
    }
}
void printArry(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}