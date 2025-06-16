#include<stdio.h>

int main(){
    int n , m ;
    printf("Enter n and m as n^m \n");
    printf("Enter n \n");
    scanf("%d",&n);
    printf("Enter m \n");
    scanf("%d",&m);
    int ans = 1;
    for(int i = 0;i<m;i++){
        ans = n *ans;
    }
    printf("Answer is : %d",ans);
    return 0;
}