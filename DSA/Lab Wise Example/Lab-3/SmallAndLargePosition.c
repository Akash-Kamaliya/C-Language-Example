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
    int min = arr[0],max=arr[0];
    int minI=0,maxI=0;
    for(int i = 0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
            minI=i;
        }
        else if(max<arr[i]){
            max = arr[i];
            maxI=i;
        }
    }
    printf("Min Value = %d and Index %d : \n",min,minI);
    printf("Max Value = %d and Index %d : \n",max,maxI);
    return 0;
}