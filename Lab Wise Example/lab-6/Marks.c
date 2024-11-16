/*5. Read marks of five subjects. Calculate percentage and print class accordingly. Fail below
35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to
70, Distinction if more than 70.*/
#include<stdio.h>

int main()
{
  int p , c , m , e , C ,per ,tot;
  char ch = '%' ;

  printf("Enter your Physics Marks : \n");
  scanf("%d",&p);
  printf("Enter your Chemistry Marks : \n");
  scanf("%d",&c);
  printf("Enter your Maths Marks : \n");
  scanf("%d",&m);
  printf("Enter your English Marks : \n");
  scanf("%d",&e);
  printf("Enter your Computer Marks : \n");
  scanf("%d",&C);
  tot= p+c+m+e+C;
  per=(p+c+m+e+C)/5.0;
  printf("Your totle marks is : %d\n", tot);
  printf("Your Percentage is : %f%c\n",per,ch);

if(per<=35)
{
  printf("Better Luck next time :(You are Fail)\n");
}
else if(per>36&&per<=45)
{
  printf("Congratulation! You are Pass:\n:");
}
else if(per>46&&per<=60)
{
  printf("Congratulation! You are in second class:\n:");
}
else if(per>61&&per<=70)
{
  printf("Congratulation! You are in First class:\n:");
  printf("Congratulation! You are Legend:\n:");
}
  return 0;
}