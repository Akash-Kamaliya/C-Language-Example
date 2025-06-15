#include<stdio.h>

int main(){
    int n1 , n2 ;
    printf("Enter First Array Size :\n");
    scanf("%d",&n1);
    int arr1[n1];
    printf("Enter All Element in First Array : \n");
    for(int i = 0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter Second Array Size :\n");
    scanf("%d",&n2);
    int arr2[n2];
    printf("Enter All Element in Second Array : \n");
    for(int i = 0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int n  = n1+n2;
    int merge[n];
    for(int i = 0;i<n;i++){
        if(i<n1){
            merge[i]=arr1[i];
        }
        else{
            merge[i] = arr2[i-n1];
        }
    }
    printf("Merged Array :\n");
    for(int i = 0;i<n;i++){
        printf("%d , ",merge[i]);
    }
    return 0;
}