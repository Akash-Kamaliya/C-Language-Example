#include <stdio.h>

// User Define
struct student
{
  int roll;
  float cgpa;
  char name[100];
};
int main()
{
  struct student s1 = {121, 9.7, "Akash"};
  printf("Student Roll No :%d\n", s1.roll);
  printf("Student CGPA  :%f\n", s1.cgpa);
  printf("Student Name :%s\n", s1.name);
  return 0;
}