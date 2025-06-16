#include <stdio.h>

int main()
{
    FILE *fp;
    char str[100];
    fp = fopen("output.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);
    printf("String written to file successfully.\n");
    return 0;
}
