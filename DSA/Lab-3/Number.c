#include<stdio.h>

int main(){
    int n;
    printf("Enter a size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all Element : \n");
    for(int i = 0;i<n;i++){
        printf("%d Element :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Print All Element : ");
    for(int i = 0;i<n;i++){
        printf("%d , ",arr[i]);
    }
    return 0;
}