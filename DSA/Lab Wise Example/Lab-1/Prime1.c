#include<stdio.h>

int main(){
    int n , m ,i ,j;
    printf("Enter a Range Like n to m :\n");
    printf("Enter n :\n");
    scanf("%d",&n);
    printf("Enter m :\n");
    scanf("%d",&m);
    for(i = n ; i <=m ; i++){
        int c = 0;
        for(j = 2;j<=i/2;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==0){
            printf(" %d,",i);
        }
    }
    return 0;
}