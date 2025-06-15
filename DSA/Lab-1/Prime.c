#include<stdio.h>

int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int c = 0;
    for(int i = 2;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==0){
        printf("Number is Prime");
    }
    else{
        printf("Number is Prime");
    }
    return 0;
}