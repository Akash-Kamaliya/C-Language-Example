/*WAP to read and display student information  using nested of structure.*/
#include <stdio.h>
struct Address
{
  char HouseNo[25];
  char City[25];
  char PinCode[25];
};
struct student
{
  char name[20];
  int rollno;
  float cpi;
  struct Address Add;
};
int main()
{
  int i;
  struct student s;
  printf("\n\t Enter Student Name:");
  scanf("%s", s.name);
  printf("\n\t Enter Student Roll No.:");
  scanf("%d", &s.rollno);
  printf("\n\t Enter Student CPI :");
  scanf("%f", &s.cpi);
  printf("\n\tEnter Student House No :");
  scanf("%s", s.Add.HouseNo);
  printf("\n\tEnter Student City :");
  scanf("%s", s.Add.City);
  printf("\n\tEnter Student PinCode :");
  scanf("%s", s.Add.PinCode);
  printf("\n Detaile of Student \n");
  printf("\n\tName : %s", s.name);
  printf("\n\tRoll No. :%d", s.rollno);
  printf("\n\tCPI : %f", s.cpi);
  printf("\n\tHouse No : %s", s.Add.HouseNo);
  printf("\n\tCity : %s", s.Add.City);
  printf("\n\tPin Code :%s", s.Add.PinCode);
  return 0;
}
