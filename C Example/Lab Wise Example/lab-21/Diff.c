#include <stdio.h>
#include <string.h>

struct Student
{
  char name[50];
  int age;
  float marks;
};

union Data
{
  int intVal;
  float floatVal;
  char str[20];
};

int main()
{
  struct Student student;
  strcpy(student.name, "Alice");
  student.age = 20;
  student.marks = 85.5;
  printf("Structure:\n");
  printf("Name: %s\n", student.name);
  printf("Age: %d\n", student.age);
  printf("Marks: %.2f\n", student.marks);
  union Data data;
  data.intVal = 10;
  printf("\nUnion (after assigning int value):\n");
  printf("Int Value: %d\n", data.intVal);
  data.floatVal = 15.5;
  printf("Float Value: %.2f\n", data.floatVal);
  strcpy(data.str, "Hello");
  printf("String Value: %s\n", data.str);
  printf("\nAfter assigning string to union:\n");
  printf("Int Value: %d\n", data.intVal);
  printf("Float Value: %.2f\n", data.floatVal);
  printf("String Value: %s\n", data.str);
  return 0;
}
