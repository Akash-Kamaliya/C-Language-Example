#include <stdio.h>
#include <ctype.h>

void capitalizeWords(FILE *src, FILE *temp)
{
    char ch;
    int newWord = 1;

    while ((ch = fgetc(src)) != EOF)
    {
        if (isspace(ch))
        {
            fputc(ch, temp);
            newWord = 1;
        }
        else
        {
            if (newWord)
            {
                fputc(toupper(ch), temp);
                newWord = 0;
            }
            else
            {
                fputc(ch, temp);
            }
        }
    }
}

int main()
{
    FILE *src, *temp;
    src = fopen("file.txt", "r");
    temp = fopen("temp.txt", "w");
    if (src == NULL || temp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    capitalizeWords(src, temp);
    fclose(src);
    fclose(temp);
    remove("file.txt");
    rename("temp.txt", "file.txt");
    printf("First letter of each word capitalized successfully.\n");
    return 0;
}
