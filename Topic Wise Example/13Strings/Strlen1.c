#include <stdio.h>
#include <string.h>

int main()
{
    char arr[] = "Akash";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen("Akash");
    printf("String = %s length = %d\n", arr, len1);
    printf("String = %s length = %d\n", "Akash", len2);
    return 0;
}