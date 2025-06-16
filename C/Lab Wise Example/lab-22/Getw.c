#include <stdio.h>

int main() {
    FILE *fptr1;
    fptr1 = fopen("text.txt", "r");
    if (fptr1 == NULL) {
        perror("Error opening file");
        return 1;
    }
    int x;
    fscanf(fptr1, "%d", &x) ;
    printf("Integer in file is: %d\n", x);
    fclose(fptr1);
    return 0;
}
