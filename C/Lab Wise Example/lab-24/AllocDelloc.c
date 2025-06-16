#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    intPtr = (int *)malloc(sizeof(int));
    if (intPtr == NULL)
    {
        printf("Memory allocation failed for int!\n");
        return 1;
    }
    charPtr = (char *)malloc(sizeof(char));
    if (charPtr == NULL)
    {
        printf("Memory allocation failed for char!\n");
        free(intPtr);
        return 1;
    }
    floatPtr = (float *)malloc(sizeof(float));
    if (floatPtr == NULL)
    {
        printf("Memory allocation failed for float!\n");
        free(intPtr);
        free(charPtr);
        return 1;
    }
    *intPtr = 42;
    *charPtr = 'A';
    *floatPtr = 3.14;
    printf("Integer value: %d\n", *intPtr);
    printf("Character value: %c\n", *charPtr);
    printf("Float value: %.2f\n", *floatPtr);
    free(intPtr);
    free(charPtr);
    free(floatPtr);
    return 0;
}