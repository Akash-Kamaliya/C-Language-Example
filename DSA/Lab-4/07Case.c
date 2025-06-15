//WAP to replace lowercase characters by uppercase & vice-versa in a user specified string.
#include<stdio.h>

int main(){
    char name[100];
    printf("Enter a String :\n");
    fgets(name, 100, stdin);
    int i = 0;
    while (name[i]!='\n')
    {
        if (name[i] >= 'A' && name[i] <= 'Z') {
            name[i] = name[i] + 32; // Convert to lowercase
        }
        else if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - 32; // Convert to uppercase
        }
        i++;
    }
    printf("After Update : String is  : %s",name);
    return 0;
}