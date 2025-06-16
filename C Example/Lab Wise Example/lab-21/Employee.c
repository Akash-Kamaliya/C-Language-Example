/*1. Create, declare and initialize structure employee.*/
#include <stdio.h>
struct Employee
{
  int id;
  char name[100];
  char designation[50];
  float salary;
};
int main()
{
  struct Employee emp1;
  printf("Enter Employee's Name :");
  gets(emp1.name);
  printf("Enter Employee's designation :");
  fgets(emp1.designation, 50, stdin);
  printf("Enter Employee's ID :");
  scanf("%d", &emp1.id);
  printf("Enter Employee's salary :");
  scanf("%f", &emp1.salary);
  
  printf("Employee Details:\n");
  printf("ID: %d\n", emp1.id);
  printf("Name: %s\n", emp1.name);
  printf("Designation: %s", emp1.designation);
  printf("Salary: %.2f\n", emp1.salary);
  return 0;
}
