#include <stdio.h>

void convert_to_words(int num);
void print_digit(int n);
void print_tens(int n);
void print_teens(int n);
int main()
{
  int number;
  printf("Enter a number between 0 and 9999: ");
  scanf("%d", &number);

  if (number < 0 || number > 9999)
  {
    printf("Number out of range.\n");
  }
  else
  {
    convert_to_words(number);
  }

  return 0;
}
void print_digit(int n)
{
  switch (n)
  {
  case 0:
    printf("Zero ");
    break;
  case 1:
    printf("One ");
    break;
  case 2:
    printf("Two ");
    break;
  case 3:
    printf("Three ");
    break;
  case 4:
    printf("Four ");
    break;
  case 5:
    printf("Five ");
    break;
  case 6:
    printf("Six ");
    break;
  case 7:
    printf("Seven ");
    break;
  case 8:
    printf("Eight ");
    break;
  case 9:
    printf("Nine ");
    break;
  }
}

void print_tens(int n)
{
  switch (n)
  {
  case 2:
    printf("Twenty ");
    break;
  case 3:
    printf("Thirty ");
    break;
  case 4:
    printf("Forty ");
    break;
  case 5:
    printf("Fifty ");
    break;
  case 6:
    printf("Sixty ");
    break;
  case 7:
    printf("Seventy ");
    break;
  case 8:
    printf("Eighty ");
    break;
  case 9:
    printf("Ninety ");
    break;
  }
}

void print_teens(int n)
{
  switch (n)
  {
  case 10:
    printf("Ten ");
    break;
  case 11:
    printf("Eleven ");
    break;
  case 12:
    printf("Twelve ");
    break;
  case 13:
    printf("Thirteen ");
    break;
  case 14:
    printf("Fourteen ");
    break;
  case 15:
    printf("Fifteen ");
    break;
  case 16:
    printf("Sixteen ");
    break;
  case 17:
    printf("Seventeen ");
    break;
  case 18:
    printf("Eighteen ");
    break;
  case 19:
    printf("Nineteen ");
    break;
  }
}

void convert_to_words(int num)
{
  if (num == 0)
  {
    printf("Zero");
    return;
  }

  if (num >= 1000)
  {
    print_digit(num / 1000);
    printf("Thousand ");
    num %= 1000;
  }

  if (num >= 100)
  {
    print_digit(num / 100);
    printf("Hundred ");
    num %= 100;
  }

  if (num >= 20)
  {
    print_tens(num / 10);
    num %= 10;
  }
  else if (num >= 10)
  {
    print_teens(num);
    return;
  }

  if (num > 0)
  {
    print_digit(num);
  }
}
