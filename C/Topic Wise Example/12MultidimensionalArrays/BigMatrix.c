#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j, big;
    big = a[0][0];
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            if (a[i][j] > big)
            {
                big = a[i][j];
            }
        }
    }
    printf("The Largest Element in TThis Matrix is %d", big);
    return 0;
}