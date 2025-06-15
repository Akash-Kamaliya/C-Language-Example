#include<stdio.h>
 
int main(){
    int x ;
    printf("Enter radius of circle : ");
    scanf("%d",&x);
    float a = 3.14 * x * x;
    printf("Area is = %f",a);
    return 0;
}