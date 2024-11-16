#include <stdio.h>
#include <time.h> // For nanosleep()


void delay(int milliseconds)
{
  struct timespec ts;
  ts.tv_sec = milliseconds / 1000;
  ts.tv_nsec = (milliseconds % 1000) * 1000000;
  nanosleep(&ts, NULL);
}

int main()
{
  char spinner[] = {'|', '/', '-', '\\'};
  int i = 0;

  printf("Loading... ");

  while (i < 20)
  {                                 // Loop 20 times for demo
    printf("%c\r", spinner[i % 4]); // Print spinner, overwrite with \r
    fflush(stdout);                 // Flush to ensure immediate display
    delay(200);                     // Delay for 200ms
    i++;
  }

  printf("Done!\n");
  return 0;
}
