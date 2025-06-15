// Write a program to insert a number at a given location in an array.
#include <stdio.h>

int main()
{
    int arr[10];
    int n =9;
    int newValue;
    int i, position;
    printf("Enter 9 Element in array\n");
    for (int i = 0; i < 9; i++)
    {
        printf("Enter %d Element", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Which Number You want to Insert :");
    scanf("%d", &newValue);
    printf("Where You want to Insert :");
    scanf("%d", &position);
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