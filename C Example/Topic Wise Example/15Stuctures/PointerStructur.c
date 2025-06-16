/*Structure Using Pointer :*/
#include <stdio.h>
struct student
{
  char name[20];
  int rollno;
  float cpi;
};

int main()
{
  struct student *studPtr, stud1;
  studPtr = &stud1;
  printf("Enter Name :");
  scanf("%s", studPtr->name);
  printf("Enter Roll No:");
  scanf("%d", &studPtr->rollno);
  printf("Enter CPI :");
  scanf("%f", &studPtr->cpi);
  printf("\n Student Detail \n");
  printf("Name : %s\n", studPtr->name);
  printf("Roll No : %d\n", studPtr->rollno);
  printf("CPI : %f\n", studPtr->cpi);
  return 0;
}