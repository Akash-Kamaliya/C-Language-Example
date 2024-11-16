#include <stdio.h>

#define tot 5

struct student
{
  char name[100];
  float percentage;
  int age;
};

int main()
{
  struct student students[tot];
  int i;
  for (i = 0; i < tot; i++)
  {
    printf("\nEnter details for student %d:\n", i + 1);

    printf("Student's Name: ");
    scanf(" %[^\n]%*c", students[i].name);

    printf("Percentage: ");
    scanf("%f", &students[i].percentage);

    printf("Age: ");
    scanf("%d", &students[i].age);
  }
  printf("\nStudent Details:\n");
  for (i = 0; i < tot; i++)
  {
    printf("\nStudent %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Percentage: %.2f\n", students[i].percentage);
    printf("Age: %d\n", students[i].age);
  }
  return 0;
}
