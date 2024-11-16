#include <stdio.h>

int main()
{
    char ch;
    printf("\nType any alphabet : ");
    ch = getchar(); /*must be follofwed by enter key*/
    printf("You typed : ");
    putchar(ch);
    return 0;
}