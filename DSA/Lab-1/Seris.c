#include<stdio.h>

int main(){
    int n , i , j , sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= i ;j++){
            sum = sum + j;
        }
    }
    printf("Answer is = %d",sum);
    return 0;
}