/*2. Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5,
IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)*/
#include <stdio.h>

int main()
{
  int n, r1, r2, r3, r4;
  char I = 'I', V = 'V', X = 'X', L = 'L', C = 'C', D = 'D', M = 'M';
  printf("Enter A number :\n");
  scanf("%d", &n);
  r1 = n % 10; // I V
  n = n / 10;
  r2 = n % 10; // X L
  n = n / 10;
  r3 = n % 10; // C D M
  n = n / 10;
  r4 = n % 10;
  if (r4 == 1)
  {
    printf("%c", M);
  }
  if (r3 != 0)
  {
    if ((r3 >= 1) && (r3 <= 3))
    {
      while (r3 != 0)
      {
        printf("%c", C);
        r3--;
      }
    }
    else if (r3 == 4)
    {
      printf("%c%c", C, D);
    }
    else if ((r3 > 4) && (r3 <= 8))
    {
      r3 = r3 - 5;
      printf("%c", D);
      while (r3 != 0)
      {
        printf("%c", C);
        r3--;
      }
    }
    else if (r3 == 9)
    {
      printf("%c%c", C, M);
    }
  }
  // This
  if (r2 != 0)
  {
    if ((r2 >= 1) && (r2 <= 3))
    {
      while (r2 != 0)
      {
        printf("%c", X);
        r2--;
      }
    }
    else if (r2 == 4)
    {
      printf("%c%c", X, L);
    }
    else if ((r2 > 4) && (r2 <= 8))
    {
      r2 = r2 - 5;
      printf("%c", L);
      while (r2 != 0)
      {
        printf("%c", X);
        r2--;
      }
    }
    else if (r2 == 9)
    {
      printf("%c%c", X, C);
    }
  }
  // This
  if (r1 != 0)
  {
    if ((r1 >= 1) && (r1 <= 3))
    {
      while (r1 != 0)
      {
        printf("%c", I);
        r1--;
      }
    }
    else if (r1 == 4)
    {
      printf("%c%c", I, V);
    }
    else if ((r1 > 4) && (r1 <= 8))
    {
      r1 = r1 - 5;
      printf("%c", V);
      while (r1 != 0)
      {
        printf("%c", I);
        r1--;
      }
    }
    else if (r1 == 9)
    {
      printf("%c%c", I, X);
    }
  }
  return 0;
}