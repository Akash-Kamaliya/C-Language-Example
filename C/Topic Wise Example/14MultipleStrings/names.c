#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *names[6], n[50];
    int len, i;
    char *p;
    for (i = 0; i <= 5; i++)
    {
        printf("Enter name : ");
        scanf("%s", n);
        len = strlen(n);
        p = (char *)malloc(len + 1);
        strcpy(p, n);
        names[i] = p;
    }
    for (i = 0; i <= 5; i++)
    {
        printf("(%d)=>%s\n", i, names[i]);
    }
    return 0;
}