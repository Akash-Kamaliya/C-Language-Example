#include <stdio.h>
#include <stdlib.h>

int main() {
    int *iptr;
    char *cptr;
    float *fptr;

    iptr = (int *)malloc(sizeof(int));
    cptr = (char *)malloc(sizeof(char));
    fptr = (float *)malloc(sizeof(float));

    if (iptr == NULL || cptr == NULL || fptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *iptr = 100;
    *cptr = 'A';
    *fptr = 45.67;

    printf("Integer value: %d\n", *iptr);
    printf("Character value: %c\n", *cptr);
    printf("Float value: %.2f\n", *fptr);
    free(iptr);
    free(cptr);
    free(fptr);

    return 0;
}
