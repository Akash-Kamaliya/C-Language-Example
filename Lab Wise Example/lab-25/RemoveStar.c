/*Write following programs in C.
You are given a string s, which contains stars *.
In one operation, you can:
Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself. Return
the string after all stars have been removed.
Note:
The input will be generated such that the operation is always possible. It can be shown that
the resulting string will always be unique.*/
#include <stdio.h>
#include <string.h>

void removeStar(char *s);

int main()
{
    char s[100];
    printf("Enter a string with stars (*): ");
    scanf("%s", s);
    removeStar(s);
    printf("Resulting string after all stars have been removed: %s\n", s);
    return 0;
}

void removeStar(char *s)
{
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '*')
        {
            if (j > 0)
            {
                j--;
            }
        }
        else
        {
            s[j] = s[i];
            j++;
        }
    }
    s[j] = '\0';
}
