#include <stdio.h>

struct book
{
    char name[50];
    float price;
    int pages;
};

int main()
{
    struct book b[10];
    int i;
    char ch;
    for (i = 0; i < 10; i++)
    {
        printf("Enter name, price, and pages for book %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", b[i].name);
        printf("Price: ");
        scanf("%f", &b[i].price);
        printf("Pages: ");
        scanf("%d", &b[i].pages);
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
    }
    printf("\nBook details:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Name: %s, Price: %.2f, Pages: %d\n", b[i].name, b[i].price, b[i].pages);
    }
    return 0;
}
