#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *number, *square;
    number = (int *)calloc(1, sizeof(int));
    square = (int *)calloc(1, sizeof(int));
    if (number == NULL || square == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter a number: ");
    scanf("%d", number);
    *square = (*number) * (*number);
    printf("The square of %d is %d.\n", *number, *square);
    free(number);
    free(square);
    return 0;
}