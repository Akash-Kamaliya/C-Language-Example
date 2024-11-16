#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_vowel(char ch);
int count_vowel_pairs(const char *text);
int main()
{
    char text[1000];
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    int result = count_vowel_pairs(text);
    printf("Number of occurrences of two successive vowels: %d\n", result);
    return 0;
}
int is_vowel(char ch)
{
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int count_vowel_pairs(const char *text)
{
    int count = 0;
    for (int i = 0; text[i] != '\0' && text[i + 1] != '\0'; i++)
    {
        if (is_vowel(text[i]) && is_vowel(text[i + 1]))
        {
            count++;
        }
    }
    return count;
}
