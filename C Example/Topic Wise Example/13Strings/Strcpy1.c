#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Akash", target[20];
    strcpy(target, source);
    printf("Source String = %s", source);
    printf("Target String = %s", target);
    return 0;
}