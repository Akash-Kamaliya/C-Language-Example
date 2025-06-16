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
    int dup,c=0;
    for (int i = 0; i < arr-1; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j]){
                dup = arr[i];
                c++;
            }
        }
    }
    if(c==0){
        printf("Here Duplicate Number is N0t Available");
    }
    else{
        printf("Here Duplicate Number is Available => Duplicate Number = %d",dup);
    }
    return 0;
}