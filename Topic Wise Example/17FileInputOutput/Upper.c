#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp, *temp;
    char ch;
    fp = fopen("file.txt", "r");
    temp = fopen("temp.txt", "w");
    if (fp == NULL || temp == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        fputc(toupper(ch), temp);
    }
    fclose(fp);
    fclose(temp);
    remove("file.txt");
    rename("temp.txt", "file.txt");
    printf("File converted to uppercase successfully.\n");
    return 0;
}