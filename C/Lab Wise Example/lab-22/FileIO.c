#include <stdio.h>
int main()
{
    FILE *fptr;
    // Reading a file
    char ch;
    fptr = fopen("text.txt", "r");
    if (fptr == NULL)
    {
        printf("doesn't exist!\n");
    }
    else
    {
        fscanf(fptr, "%c", &ch);
        printf("character in file is : %c\n", ch);
        fscanf(fptr, "%c", &ch);
        printf("character in file is : %c\n", ch);
        fclose(fptr);
    }
    // Writing in a file
    ch = 'M';
    fptr = fopen("text.txt", "w");
    fprintf(fptr, "%cANGO", ch);
    fclose(fptr);
    // fgets
    fptr = fopen("text.txt", "r");
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    printf("character in file is : %c\n", fgetc(fptr));
    fclose(fptr);
    // fputc
    fptr = fopen("text.txt", "w");
    fputc('a', fptr);
    fputc('k', fptr);
    fputc('a', fptr);
    fputc('s', fptr);
    fputc('h', fptr);
    fclose(fptr);
    // read the full file (EOF)
    fptr = fopen("text.txt", "r");
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}