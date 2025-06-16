#include<stdio.h>

int main()
{
  FILE *fptr1,*fptr2;
  char ch;
  char Akash[10]="Kamaliya";
  fptr1=fopen("text.txt","a");

  // fptr2=fopen("text1.txt","w");
  fscanf(fptr1,"%s",Akash);
  // do{
  //   ch=getc(fptr1);
  //   putchar(ch);
  // }while(ch!=EOF);
  fclose(fptr1);
  // fclose(fptr2);
  // fptr2=fopen("text.txt","r");
  // do{
  //   ch = getc(fptr2);
  //   putchar(ch);
  // }while(ch!=EOF);
  // fclose(fptr2);
  return 0;
}