/*Write a C program to copy a number of bytes from a specific offset to another file.*/
#include <stdio.h>

int main()
{
    FILE *source, *dest;
    int offset, bytes;
    char ch;
    source = fopen("source.txt", "r");
    dest = fopen("destination.txt", "w");
    if (source == NULL || dest == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }
    printf("Enter offset position: ");
    scanf("%d", &offset);
    printf("Enter number of bytes to copy: ");
    scanf("%d", &bytes);
    fseek(source, offset, SEEK_SET);
    for (int i = 0; i < bytes; i++)
    {
        ch = fgetc(source);
        if (ch == EOF)
            break;
        fputc(ch, dest);
    }
    fclose(source);
    fclose(dest);
    printf("Bytes copied successfully.\n");
    return 0;
}