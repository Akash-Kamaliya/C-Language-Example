#include<stdio.h>

int main()
{
  char ch;
  printf("Enter  any one of the alphabate a , b or c:\n");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'a':
    case 'A':
    printf("A for Apple");
    break;
    case 'b':
    case 'B':
    printf("B for Ball");
    break;
    case 'c':
    case 'C':
    printf("C for cat");
    break;
    default:
    printf("Please Enter  any one of the alphabate a , b or c:");
    return 0;
  }
}