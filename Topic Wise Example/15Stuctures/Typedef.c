#include <stdio.h>

// User Define
typedef struct student
{
  int roll;
  float cgpa;
  char name[100];
} CE; // used to create Alias data types:
int main()
{
  CE s1 = {121, 9.7, "Akash"};
  printf("Student Roll No :%d\n", s1.roll);
  printf("Student CGPA  :%f\n", s1.cgpa);
  printf("Student Name :%s\n", s1.name);
  return 0;
}