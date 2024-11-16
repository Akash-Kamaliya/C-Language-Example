#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("text.txt", "r");
    if (file == NULL)
    {
        printf("Error in opening file!\n");
        return 1;
    }
    fseek(file, 4, SEEK_SET);
    char ch = fgetc(file);
    printf("Character at position 4: %c\n", ch);
    fclose(file);
    return 0;
}
