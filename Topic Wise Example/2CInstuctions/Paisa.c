/*We have 1 Rs note ,2 Rs note ,5 Rs note ,10 Rs note ,50 Rs note And 100 Rs note ,
but our Pocket is Small so We Calculate Smallest number of note of Given Amount*/
#include<stdio.h>

int main(){
  int amount , noOfNotes = 0  ;
  printf("Enter THe Amount :\n");
  scanf("%d",&amount);

  for(int i = 100 ; i != 0; i = i /2 ){
    noOfNotes += amount / i ;
    amount = amount % i ;
  }
  printf("Number of notes = %d\n" , noOfNotes );
  return 0;
}