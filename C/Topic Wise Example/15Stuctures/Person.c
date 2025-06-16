#include <stdio.h>

struct Person
{
  char name[100];
  char date_of_joining[20];
  float salary;
};
int main()
{
  struct Person people[5];
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("\nEnter details for person %d:\n", i + 1);
    printf("Name: ");
    scanf(" %[^\n]%*c", people[i].name);
    printf("Date of Joining (DD/MM/YYYY): ");
    scanf(" %[^\n]%*c", people[i].date_of_joining);
    printf("Salary: ");
    scanf("%f", &people[i].salary);
  }
  printf("\nDetails of 5 people:\n");
  for (i = 0; i < 5; i++)
  {
    printf("\nPerson %d:\n", i + 1);
    printf("Name: %s\n", people[i].name);
    printf("Date of Joining: %s\n", people[i].date_of_joining);
    printf("Salary: %.2f\n", people[i].salary);
  }
  return 0;
}
