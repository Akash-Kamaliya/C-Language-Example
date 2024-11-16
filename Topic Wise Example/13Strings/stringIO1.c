#include <stdio.h>

int main()
{
    char name[] = "Akash";
    char *ptr;
    ptr = name; /*Strore base address of String */
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}