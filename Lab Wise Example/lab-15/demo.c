//search array as user input
#include<stdio.h>

int main() {
    int arr[100], n, search, i;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the value to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is present at index %d.\n", search, i);
            return 0;
        }
    }

    printf("%d is not present in array.\n", search);

    return 0;
}