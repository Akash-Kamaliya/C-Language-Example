/*This Program is about set of 10 calculation of amount and amount's formula is following
a = p( 1 + r/q)^nq*/
#include<stdio.h>
#include<math.h>

int main()
{
  for(int i=1;i<=10;i++)
  {
  float p , a , r , q , n ;
  printf("Enter the value of p :\n");
  scanf("%f",&p);
  printf("Enter the value of r :\n");
  scanf("%f",&r);
  printf("Enter the value of n :\n");
  scanf("%f",&n);
  printf("Enter the value of q :\n");
  scanf("%f",&q);

  a = p * (pow((1+r/q),(n*q)));

  printf("Totle Amount is %f\n",a);
  }
  return 0;
}