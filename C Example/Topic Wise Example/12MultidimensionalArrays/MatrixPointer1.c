#include <stdio.h>

int main()
{
    int s[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int(*p)[3];
    int i, j, *pint;
    for (i = 0; i <= 2; i++)
    {
        p = &s[i];
        pint = *p;
        for (j = 0; j <= 2; j++)
        {
            printf("%d  ", *(pint + j)); // or *(*p+j);
        }
        printf("\n");
    }
    return 0;
}