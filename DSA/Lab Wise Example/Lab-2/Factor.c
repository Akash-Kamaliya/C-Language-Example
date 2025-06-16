#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Factor are :");
    for(int i = 1;i<=n/2;i++){
        if(n%i==0){
            printf(" %d ,",i);
        }
    }
    printf(" %d .",n);
    return 0 ;
}