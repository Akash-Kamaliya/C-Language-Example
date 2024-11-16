#include <stdio.h>

struct address
{
    char phone[15];
    char city[25];
    int pin;
};

struct emp
{
    char name[25];
    struct address a;
};

int main()
{
    struct emp e = {"Jeru", "2531046", "Nagpur", 10};
    printf("Name = %s, Phone = %s\n", e.name, e.a.phone);
    printf("City = %s, Pin = %d\n", e.a.city, e.a.pin);
    return 0;
}
