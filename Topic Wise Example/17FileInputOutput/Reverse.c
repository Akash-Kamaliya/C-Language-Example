#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    long pos;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    for (long i = pos - 1; i >= 0; i--)
    {
        fseek(fp, i, SEEK_SET);
        ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
    return 0;
}