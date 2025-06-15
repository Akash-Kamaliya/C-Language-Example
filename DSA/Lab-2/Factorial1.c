#include<stdio.h>
int Fact(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i ;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number to find Factorial : ");
    scanf("%d",&n);
    printf("Answer is %d",Fact(n));
    return 0;
}
