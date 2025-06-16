#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    int *fp;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    fp = (int *)calloc(n, sizeof(int));
    if (fp == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &fp[i]);
    }

    printf("You entered: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", fp[i]);
    }
    printf("\n");
    free(fp);
    return 0;
}