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
    int n1 , m ,index[n];
    printf("Enter N Which is Replace ny M\n");
    printf("Enter N to Replace\n");
    scanf("%d",&n1);
    printf("Enter M from replace\n");
    scanf("%d",&m);
    int j = 0;
    for(int i=0;i<n;i++){
        if(m==arr[i]){
            arr[i]=n1;
            index[j]=i;
            j++;
        }
    }
    if(j==0){
        printf("Number is Not Found");
    }
    else{
        printf("Array is :\n");
        for(int i = 0;i<n;i++){
            printf("%d , ",arr[i]);
        }
        printf("\n");
        printf("Index Are :");
        for(int i = 0;i<j;i++){
            printf("%d , ",index[i]);
        }
    }
    return 0;
}