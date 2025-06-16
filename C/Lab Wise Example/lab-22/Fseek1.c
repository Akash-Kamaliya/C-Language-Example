#include <stdio.h>

int main()
{
    FILE *fp;
    char data[] = "Hello, World!";
    char newData[] = "Universe";
    fp = fopen("example.txt", "w+");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fputs(data, fp);
    printf("Original data written to file: %s\n", data);
    fseek(fp, 7, SEEK_SET);
    fputs(newData, fp);
    printf("Data after modification: Hello, Universe!\n");
    fclose(fp);
    return 0;
}
