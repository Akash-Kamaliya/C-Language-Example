#include <stdio.h>

// Define structure
struct Student {
    int roll_no;
    char name[50];
    char branch[30];
    int batch_no;
};

int main() {
    struct Student s1;
    struct Student *ptr = &s1;

    
    printf("Enter student details:\n");

    printf("Roll No: ");
    scanf("%d", &ptr->roll_no);

    printf("Name: ");
    scanf("%s", ptr->name);

    printf("Branch: ");
    scanf("%s", ptr->branch);

    printf("Batch No: ");
    scanf("%d", &ptr->batch_no);
    
    printf("\nStudent Details:\n");
    printf("Roll No   : %d\n", ptr->roll_no);
    printf("Name      : %s\n", ptr->name);
    printf("Branch    : %s\n", ptr->branch);
    printf("Batch No  : %d\n", ptr->batch_no);

    return 0;
}
