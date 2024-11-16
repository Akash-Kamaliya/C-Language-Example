#include <stdio.h>

int main()
{
  int dec_num, i, temp;
  int bin[32];

  printf("\nEnter a decimal number: ");
  scanf("%d", &dec_num);

  int foundFirstOne = 0;

  if (dec_num < 0)
  {
    temp = -dec_num;
    for (i = 31; i >= 0; i--)
    {

      bin[i] = temp % 2;
      temp /= 2;

      if (foundFirstOne)
      {
        bin[i] = !bin[i];
      }
      else if (bin[i] == 1)
      {
        foundFirstOne = 1;
      }
    }
  }
  else
  {
    temp = dec_num;
    for (i = 31; i >= 0; i--)
    {
      temp = dec_num;
      bin[i] = temp % 2;
      temp /= 2;
    }
  }
  printf("\nBinary Representation of %d is: ", dec_num);
  for (i = 0; i <= 31; i++)
  {
    printf("%d", bin[i]);
  }
  return 0;
}