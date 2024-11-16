#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[80];
    fp == fopen("text.txt", "r");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    printf("\n ENter a few lines of text:\n");
    while (strlen(gets(str)) > 0)
    {
        fputs(str, fp);
        fputs("\n", fp);
    }
    fclose(fp);
    /*Read the file back*/
    printf("\nFile contents are being now...\n");
    fp = fopen("text.txt", "r");
    if (fp == NULL)
    {
        puts("Cannot open file");
        exit(2);
    }
    while (fgets(str, 79, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}