#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int j, Small;
    Small = a[0];
    for (j = 0; j <= 2; j++)
    {
        if (a[j] < Small)
        {
            Small = a[j];
        }
    }
    printf("The Smallest Element in TThis Matrix is %d", Small);
    return 0;
}