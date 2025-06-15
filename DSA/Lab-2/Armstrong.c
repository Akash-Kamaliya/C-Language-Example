#include<stdio.h>
#include<math.h>

int main(){
    int num ;
    for(int i = 1;i<=10000;i++){
        int sum = 0,d=0;
        num = i;
        while (num!=0)
        {
            num = num /10;
            d++;
        }
        num = i;
        while(num!=0){
            sum = floor(pow(num%10,d)) + sum;
            num = num / 10;
        }

        if(i == sum){
            printf(" %d,",i);
        }
    }
    return 0;
}