#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    int max = *ptr;

    for(i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("The largest element is: %d\n", max);

    return 0;
}
