/* Very Important Topic N ti The Power of N */
#include<stdio.h>

int main() {
    int n, result = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = 0; j < result; j++) {
            temp += n;
            //printf("temp is :%d\n", temp);
        }
        result = temp;
        //printf("result is :%d\n", result);
    }

    printf("%d^%d = %d\n", n, n, result);

    return 0;
}
