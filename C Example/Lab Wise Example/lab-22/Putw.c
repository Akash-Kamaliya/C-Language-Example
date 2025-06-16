#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("text.txt", "a");
    if (fptr == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    int num = 12345;
    if (fprintf(fptr, "%d\n", num) < 0) {
        perror("Error writing integer to file");
        fclose(fptr);
        return 1;
    }
    fclose(fptr);
    fptr = fopen("text.txt", "r");
    if (fptr == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    int readNum;
    if (fscanf(fptr, "%d", &readNum) != 1) {
        printf("Error reading integer from file or no integer found.\n");
    } else {
        printf("Integer read from file is: %d\n", readNum);
    }
    fclose(fptr);
    return 0;
}
