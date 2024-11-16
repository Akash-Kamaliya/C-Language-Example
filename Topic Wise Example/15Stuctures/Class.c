#include <stdio.h>
#define tot 10
struct student_record
{
  char name[100];
  char branch[50];
  int total_marks;
};
int main()
{
  struct student_record students[tot];
  int i;
  for (i = 0; i < tot; i++)
  {
    printf("\nEnter details for student %d:\n", i + 1);

    printf("Student's Name: ");
    scanf(" %[^\n]%*c", students[i].name);

    printf("Branch: ");
    scanf(" %[^\n]%*c", students[i].branch);

    printf("Total Marks: ");
    scanf("%d", &students[i].total_marks);
  }
  printf("\nClass Details:\n");
  for (i = 0; i < tot; i++)
  {
    printf("\nStudent %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Branch: %s\n", students[i].branch);
    printf("Total Marks: %d\n", students[i].total_marks);
  }
  return 0;
}
