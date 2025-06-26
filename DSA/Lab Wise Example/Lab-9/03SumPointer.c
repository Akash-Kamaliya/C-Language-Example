#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    for(i = 0; i < n; i++) {
        sum += *(ptr + i);
    }

    printf("Sum of the numbers = %d\n", sum);

    return 0;
}
