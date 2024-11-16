#include <stdio.h>

char *findSubstring(const char *mainStr, const char *subStr);
int main()
{
    const char *mainStr = "Hello, world!";
    const char *subStr = "world";
    char *result = findSubstring(mainStr, subStr);
    if (result)
    {
        printf("Substring found at position: %ld\n", result - mainStr);
    }
    else
    {
        printf("Substring not found.\n");
    }
    return 0;
}
char *findSubstring(const char *mainStr, const char *subStr)
{
    if (*subStr == '\0')
    {
        return (char *)mainStr;
    }

    while (*mainStr != '\0')
    {
        const char *m = mainStr;
        const char *s = subStr;
        while (*m == *s && *s != '\0')
        {
            m++;
            s++;
        }
        if (*s == '\0')
        {
            return (char *)mainStr;
        }
        mainStr++;
    }
    return NULL;
}