/*2. Create a structure book with book title, author, publication, and price. Read data of 3
books and display.*/
#include <stdio.h>
#include <string.h>
struct Book
{
  char title[100];
  char author[100];
  char publication[100];
  float price;
};

int main()
{
  struct Book books[3];
  for (int i = 0; i < 3; i++)
  {
    printf("\nEnter details of book %d:\n", i + 1);
    printf("Enter title: ");
    fgets(books[i].title, 100, stdin);

    printf("Enter author: ");
    fgets(books[i].author, 100, stdin);

    printf("Enter publication: ");
    fgets(books[i].publication, 100, stdin);

    printf("Enter price: ");
    scanf("%f", &books[i].price);
    getchar();
  }
  printf("\nDetails of the 3 books:\n");
  for (int i = 0; i < 3; i++)
  {
    printf("\nBook %d:\n", i + 1);
    printf("Title: %s", books[i].title);
    printf("Author: %s", books[i].author);
    printf("Publication: %s", books[i].publication);
    printf("Price: %.2f\n", books[i].price);
  }
  return 0;
}
