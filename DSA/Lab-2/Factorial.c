#include<stdio.h>
int Fact(int n);
int main(){
    int n;
    printf("Enter a number to find Factorial : ");
    scanf("%d",&n);
    printf("Answer is %d",Fact(n));
    return 0;
}
int Fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n * Fact(n-1);
}