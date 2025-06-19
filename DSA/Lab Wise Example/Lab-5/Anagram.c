#include<stdio.h>
#include<time.h>

int main(){
    int n;
    int a =0;
    char word[100];
    printf("Enter a size of String :");
    scanf("%d",&n);
    char name[n][100];
    printf("Enter words LIne by Line\n");
    for(int i = 0;i<n+1;i++){
        fgets(name[i], 100, stdin);
    }
    int num = srand(time(NULL)) % n;
    printf("Random Number is : %d\n",num);
    printf("Enter Thw Word which is Anagram of = %s\n",name[num+1]);
    fgets(word, 100, stdin);
    for(int i = 0;name[num+1][i] !='\n';i++){
        int c = 0;
        for(int j = 0;word[j] !='\n';j++){
            if(name[num+1][i]==word[j]){
                c++;
            }
        }
        if(c==0){
            printf("Your Given Number is Not Anagram :\n");
            a++;
            break;
        }
    }
    if(a==0){
        printf("Your Given Number is Anagram :\n");
    }
    return 0;
}