#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;
    char *text;
    printf("Enter the length of the text: ");
    scanf("%d", &length);
    text = (char *)malloc((length + 1) * sizeof(char));
    if (text == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    while (getchar() != '\n')
        ;
    printf("Enter the text: ");
    fgets(text, length + 1, stdin);
    printf("You entered: %s\n", text);
    free(text);
    return 0;
}