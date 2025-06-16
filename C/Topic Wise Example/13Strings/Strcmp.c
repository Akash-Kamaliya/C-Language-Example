#include<stdio.h>
#include<string.h>
int StrLen1(char str1[100]);
int StrLen2(char str2[100]);
int main()
{
  int a,b,d,e=0;
  char str3[100],str4[100];
  printf("Enter First Name :");
  gets(str3);
  printf("Enter Second Name : ");
  gets(str4);
  a=StrLen1(str3);
  b=StrLen2(str4);
  if(a>=b)
  {
    d=b;
  }
  else if(a>b)
  {
    d=a;
  }

  for(int i=0;i!=d;i++)
  {
    if(str3[i]==str4[i])
    {
      e++;
    }
    else if(str3[i]>str4[i])
    {
      printf("Using My Own Function Answer is : 1");
      break;
    }
    else{
      printf("Using My Own Function Answer is : -1");
      break;
    }
  }
  if(e==d)
  {
    printf("Using My Own Function Answer is : 0");
  }
  printf("\n");
  printf("Using Library Function Answer is : %d",strcmp(str3,str4));
  return 0;
}
int StrLen1(char str1[100])
{
  int c=0;
  for(int i=0;str1[i]!='\0';i++)
  {
    c++;
  }
  return c;
}
int StrLen2(char str2[100])
{int c=0;
  for(int i=0;str2[i]!='\0';i++)
  {
    c++;
  }
  return c;
}