#include <stdio.h>

enum Weekday {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Weekday today;
    today = WEDNESDAY;
    if (today == WEDNESDAY) {
        printf("Today is Wednesday!\n");
    } else {
        printf("Today is not Wednesday.\n");
    }
    return 0;
}