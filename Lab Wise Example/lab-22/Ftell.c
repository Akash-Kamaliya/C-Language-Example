#include <stdio.h>

int main()
{
    FILE *fp;
    long position;
    fp = fopen("example.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fputs("Hello, World!", fp);
    position = ftell(fp);
    printf("Current file pointer position after writing: %ld\n", position);
    fclose(fp);
    return 0;
}