#include <stdio.h>

int main()
{
    char sentence[81];
    char result[81];
    int j = 0;

    printf("Enter a sentence (max 80 characters): ");
    fgets(sentence, 81, stdin);
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != 'a' && sentence[i] != 'e' && sentence[i] != 'i' &&
            sentence[i] != 'o' && sentence[i] != 'u' &&
            sentence[i] != 'A' && sentence[i] != 'E' && sentence[i] != 'I' &&
            sentence[i] != 'O' && sentence[i] != 'U')
        {
            result[j++] = sentence[i];
        }
    }
    result[j] = '\0';
    printf("Sentence without vowels: %s", result);
    return 0;
}
