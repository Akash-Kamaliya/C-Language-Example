#include <stdio.h>

int main()
{
  int dec_num, i, temp;
  int bin[32];

  printf("\nEnter a decimal number: ");
  scanf("%d", &dec_num);

  if (dec_num < 0)
  {
    temp = -dec_num;
  }
  else
  {
    temp = dec_num;
  }

  for (i = 31; i >= 0; i--)
  {
    bin[i] = temp % 2;
    temp /= 2;
  }

  if (dec_num < 0)
  {
    for (i = 0; i <= 31; i++)
    {
      bin[i] = (bin[i] == 0) ? 1 : 0;
    }

    for (i = 31; i >= 0; i--)
    {
      if (bin[i] == 0)
      {
        bin[i] = 1;
        break;
      }
      else
      {
        bin[i] = 0;
      }
    }
  }

  printf("\nBinary representation of %d is: ", dec_num);

  for (i = 0; i <= 31; i++)
  {
    printf("%d", bin[i]);
  }

  return 0;
}