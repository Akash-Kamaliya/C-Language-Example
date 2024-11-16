#include <stdio.h>
void insertionSort(int arr[], int n);
void printArry(int arr[], int n);
int main()
{
    int arr[] = {4, 3, 5, 2, 1};
    printf("Before Sorting :\n");
    printArry(arr, 5);
    insertionSort(arr, 5);
    printf("\n");
    printf("After Sorting using Insertion Sort:\n");
    printArry(arr, 5);
    return 0;
}
void insertionSort(int arr[], int n)
{
    int i, j;
    for (i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr; // placing the current element in it's current position
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