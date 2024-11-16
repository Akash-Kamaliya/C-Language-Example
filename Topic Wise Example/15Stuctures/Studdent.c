#include <stdio.h>
#include <math.h>

struct student
{
  char name[40];
  int roll;
  float CPI;
  int backlog;
};

int main()
{
  struct student student1;
  printf("Enter name :");
  gets(student1.name);
  printf("Enter Roll no. :");
  scanf("%d", &student1.roll);
  printf("Enter CPI :");
  scanf("%f", &student1.CPI);
  printf("Enter Backlog :");
  scanf("%d", student1.backlog);
  printf("\n");
  printf("Student Name :");
  puts(student1.name);
  printf("Student Roll No.%d :", student1.roll);
  printf("Student CPI is :%f", student1.CPI);
  printf("Student backlog is: %d", student1.backlog);
  return 0;
}