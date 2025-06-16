#include<stdio.h>

int main(){
    int n = 5;
    char c = 'A';
    for(int i = 0;i<=n;i++){
        c='A';
        for(int j = n;j>=i;j--){
            printf(" ");
        }
        for(int j = 0;j<=i;j++){
            if((i)%2==0){
                printf(" %d",j+1);
            }
            else{
                printf(" %c",c);
                c++;
            }
        }
        
        printf("\n");
    }
    return 0;
}