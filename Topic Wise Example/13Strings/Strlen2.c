#include <stdio.h>
int xstrlen(char *);
int main()
{
    char arr[] = "Akash";
    int len1, len2;
    len1 = xstrlen(arr);
    len2 = xstrlen("Akash");
    printf("String =%s Length = %d\n", arr, len1);
    printf("String = %s Length = %d\n", "Akash", len2);
    return 0;
}
int xstrlen(char *s)
{
    int length = 0;
    while (*s != '\0')
    {
        length++;
        s++;
    }
    return (length);
}