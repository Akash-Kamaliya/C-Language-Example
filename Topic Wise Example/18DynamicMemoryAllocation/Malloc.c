#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *fp;
    fp = (int *)malloc(sizeof(int));
    *fp = 25;
    printf("%d", *fp);
    free(fp);
    return 0;
}