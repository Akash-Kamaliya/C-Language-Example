#include <stdio.h>
#include <string.h>
int main()
{
    char string1[] = "Akash", string2[] = "Kamaliya";
    int i, j, k;
    i = strcmp(string1, "Akash");
    j = strcmp(string1, string2);
    k = strcmp(string1, "kamaliya");
    printf("%d  %d  %d\n", i, j, k);
    return 0;
}