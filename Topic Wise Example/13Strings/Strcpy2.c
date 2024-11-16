#include <stdio.h>.
void xstrcpy(char *, char *);
int main()
{
    char source[] = "Akash", target[20];
    xstrcpy(source, target);
    printf("Source String = %s", source);
    printf("Target String = %s", target);
    return 0;
}
void xstrcpy(char *t, char *s)
{
    while (*s)
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}