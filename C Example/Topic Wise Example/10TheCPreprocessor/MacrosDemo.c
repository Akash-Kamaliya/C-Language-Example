/*=> Write macro definition for the following:
1. To test Whether a character is a lovercase letter or not;
2. To test Whether a character is a upercase letter or not;
3.  To test Whether a character is an alphabet or not.Make use of the macros you defined in 1 and 2 above.
4. To obtain the bigger of two number: */
/*Macros ISUPPER , ISLOWER , ISALPHA , BIG*/
#include <stdio.h>
#define ISUPPER(x) (x >= 60 && x <= 90 ? 1 : 0)
#define ISLOWER(x) (x >= 97 && x <= 122 ? 1 : 0)
#define ISALPHA(x) (ISUPPER(x) || ISLOWER(x))
#define BIG(x, y) (x > y ? x : y)
int main()
{
  char ch;
  int d, a, b;
  printf("\nEnter any alphabat/character:");
  scanf("%c", &ch);
  if (ISUPPER(ch) == 1)
  {
    printf("You entered a capital letter\n");
  }
  if (ISLOWER(ch) == 1)
  {
    printf("You entered a small case letter\n");
  }
  if (ISALPHA(ch) != 1)
  {
    printf("you entered character other then an alphabet:\n");
  }
  printf("Enter any two numbers:");
  scanf("%d%d", &a, &b);
  d = BIG(a, b);
  printf("Bigger number is %d:\n", d);
  return 0;
}