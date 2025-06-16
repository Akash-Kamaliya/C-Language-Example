#include <stdio.h>

int main()
{
    FILE *data, *odd, *even;
    int num;
    data = fopen("data.txt", "r");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");
    if (data == NULL || odd == NULL || even == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }
    while (fscanf(data, "%d", &num) != EOF)
    {
        if (num % 2 == 0)
            fprintf(even, "%d\n", num);
        else
            fprintf(odd, "%d\n", num);
    }
    fclose(data);
    fclose(odd);
    fclose(even);
    printf("Contents of odd file:\n");
    odd = fopen("odd.txt", "r");
    while (fscanf(odd, "%d", &num) != EOF)
        printf("%d ", num);
    fclose(odd);
    printf("\nContents of even file:\n");
    even = fopen("even.txt", "r");
    while (fscanf(even, "%d", &num) != EOF)
        printf("%d ", num);
    fclose(even);
    return 0;
}