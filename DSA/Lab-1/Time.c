#include<stdio.h>

int main(){
    int second , s=0 , m=0 , h=0;
    printf("Enter Second : ");
    scanf("%d",&second);
    h = second / 3600;
    second = second % 3600;
    m = second / 60;
    s = second % 60;
    printf("Time is = %02d : %02d : %02d",h ,m,s);
    return 0;
}