/*Check whether given character is vowel or consonant. (Using single if only)*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n", ch);
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        printf("%c is a consonant.\n", ch);
        break;
    default:
        printf("%c is not a letter.\n", ch);
    }
    return 0;
}