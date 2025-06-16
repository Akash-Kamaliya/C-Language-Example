#include <stdio.h>

int main()
{
    FILE *fp;
    char buffer[50];
    fp = fopen("example.txt", "w+");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    fputs("Hello, World!", fp);
    fseek(fp, 0, SEEK_END);
    rewind(fp);
    fgets(buffer, sizeof(buffer), fp);
    printf("Data read from file after rewind: %s\n", buffer);
    fclose(fp);
    return 0;
}
