#include<stdio.h>

int main(){
    int day , d=0 , w=0 , y=0;
    printf("Enter day : ");
    scanf("%d",&day);
    y = day / 365;
    day = day % 365;
    w = day / 7;
    d = day % 7;
    printf("Time is = %02d : %02d : %02d",y,w,d);
    return 0;
}