#include <stdio.h>

int main()
{
    char name[] = "Akash";
    char *ptr;
    int i = 0;
    ptr = name; /*Strore base address of String */
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        printf("%c", i[name]);
        printf("%c", name[i]);
        printf("%c", *(name + i));
        printf("%c", *(i + name));
        ptr++;
        i++;
    }
    printf("\n");
    return 0;
}