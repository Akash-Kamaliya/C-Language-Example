#include<stdio.h>
 
int main(){
    char x ;
    printf("Enter a Character : ");
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("Character is Wovel");
    }
    else{
        printf("Character is consonat");
    }
    return 0;
}