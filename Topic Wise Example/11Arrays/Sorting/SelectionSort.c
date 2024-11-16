#include <stdio.h>
void selectionSort(int arr[], int n);
void printArry(int arr[], int n);
int main()
{
    int arr[] = {4, 3, 5, 2, 1};
    printf("Before Sorting :\n");
    printArry(arr, 5);
    selectionSort(arr, 5);
    printf("\n");
    printf("After Sorting using Selection Sort:\n");
    printArry(arr, 5);
    return 0;
}
void selectionSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
        }
        arr[i] = arr[i] + arr[smallestIndex];
        arr[smallestIndex] = arr[i] - arr[smallestIndex];
        arr[i] = arr[i] - arr[smallestIndex];
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