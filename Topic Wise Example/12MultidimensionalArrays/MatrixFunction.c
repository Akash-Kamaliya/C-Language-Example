#include <stdio.h>
void display(int q[][3], int, int);
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    display(a, 3, 3);
    return 0;
}
void display(int q[][3], int row, int col)
{
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d  ", q[i][j]);
        }
        printf("\n");
    }
}