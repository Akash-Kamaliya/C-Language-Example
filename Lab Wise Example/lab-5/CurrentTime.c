/*2. Display the current Date & Time. [#include <time.h> for time and ctime function and
time_t datatype.]*/
#include <stdio.h>
#include <time.h>

int main()
{
    // Get the current time
    time_t ct;
    time(&ct);
    // Convert it to local time format and print it
    printf("Current Date and Time: %s", ctime(&ct));
    return 0;
}
