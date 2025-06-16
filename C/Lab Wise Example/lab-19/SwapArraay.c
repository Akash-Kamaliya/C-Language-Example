/*2. Scan a character string passed as an argument and convert all lowercase string to
uppercase string.*/
#include <stdio.h>
void swapArrays(int arr1[], int arr2[], int size);
void printArray(int arr[], int size);
int main()
{
  int size;
  printf("Enter the size of the arrays: ");
  scanf("%d", &size);
  int arr1[size], arr2[size];
  printf("Enter elements of array 1: \n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr1[i]);
  }
  printf("Enter elements of array 2: \n");
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr2[i]);
  }
  swapArrays(arr1, arr2, size);
  printf("\nArray 1 after swapping: ");
  printArray(arr1, size);
  printf("Array 2 after swapping: ");
  printArray(arr2, size);
  return 0;
}
void swapArrays(int arr1[], int arr2[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }
}
void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
