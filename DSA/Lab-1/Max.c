#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a ");
    scanf("%d",&a); 
    printf("Enter b ");
    scanf("%d",&b); 
    printf("Enter c ");
    scanf("%d",&c); 
    if(a>b){
        if(a>c){
            printf("a is Biggest Number");
        }
        else{
            printf("c is Biggest Number");
        }
    }
    else{
        if(b>c){
            printf("b is Biggest Number");
        }
        else{
            printf("c is Biggest Number");
        }
    }
    return 0 ;
}