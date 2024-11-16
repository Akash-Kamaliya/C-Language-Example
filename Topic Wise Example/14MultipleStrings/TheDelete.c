#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char line[81];
    char result[81];
    char *word;
    int index = 0;

    printf("Enter a line of text (max 80 characters): ");
    fgets(line, 81, stdin);
    word = strtok(line, " ");

    while (word != NULL)
    {
        if (strcmp(word, "the") != 0)
        {
            int len = strlen(word);
            strncpy(result + index, word, len);
            index += len;
            result[index++] = ' ';
        }
        word = strtok(NULL, " ");
    }
    if (index > 0)
    {
        result[index - 1] = '\0';
    }
    else
    {
        result[0] = '\0';
    }
    printf("Line without 'the': %s\n", result);
    return 0;
}
