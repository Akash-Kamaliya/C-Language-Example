#include <stdio.h>

struct book
{
  char title[100];
  char author[100];
  char publication[100];
  float price;
};
int main()
{
  int n, i;
  printf("Enter the number of books: ");
  scanf("%d", &n);
  struct book books[n];
  for (i = 0; i < n; i++)
  {
    printf("\nEnter details for book %d:\n", i + 1);
    printf("Title: ");
    scanf(" %[^\n]%*c", books[i].title);
    printf("Author: ");
    scanf(" %[^\n]%*c", books[i].author);
    printf("Publication: ");
    scanf(" %[^\n]%*c", books[i].publication);
    printf("Price: ");
    scanf("%f", &books[i].price);
  }
  printf("\nDetails of the books:\n");
  for (i = 0; i < n; i++)
  {
    printf("\nBook %d:\n", i + 1);
    printf("Title: %s\n", books[i].title);
    printf("Author: %s\n", books[i].author);
    printf("Publication: %s\n", books[i].publication);
    printf("Price: %.2f\n", books[i].price);
  }
  return 0;
}
