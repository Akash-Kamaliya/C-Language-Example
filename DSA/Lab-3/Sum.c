#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter a size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all Element : \n");
    for(int i = 0;i<n;i++){
        printf("%d Element :",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0;i<n;i++){
        sum = sum +arr[i];
    }
    printf("Print Sum = %d\n ",sum);
    return 0;
}