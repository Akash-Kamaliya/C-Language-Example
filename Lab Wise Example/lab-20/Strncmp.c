#include<stdio.h>
#include<string.h>
int StrLen1(char str1[100]);
int StrLen2(char str2[100]);
int main()
{
  int a,b,d,e=0;
  int n,n1;
  char str3[100],str4[100];
  printf("Enter First Name :");
  gets(str3);
  printf("Enter Second Name : ");
  gets(str4);
  printf("How many Character to comparision:");
  scanf("%d",&n);
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
  n1=n;
  for(int i=0;n!=0;i++,n--)
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
  if(e==n1)
  {
    printf("Using My Own Function Answer is : 0");
  }
  printf("\n");
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