#include <stdio.h>
#include <time.h>              // For nanosleep()
#define TXT_BLACK "\x1b[30m"   // Or \033[0;30m
#define TXT_RED "\x1b[31m"     // Or \033[0;31m
#define TXT_GREEN "\x1b[32m"   // Or \033[0;32m
#define TXT_YELLOW "\x1b[33m"  // Or \033[0;33m
#define TXT_BLUE "\x1b[34m"    // Or \033[0;34m
#define TXT_MAGENTA "\x1b[35m" // Or \033[0;35m
#define TXT_CYAN "\x1b[36m"    // Or \033[0;36m
#define TXT_WHITE "\x1b[37m"   // Or \033[0;37m

// Function to introduce a delay in milliseconds
void delay(int milliseconds)
{
  struct timespec ts;
  ts.tv_sec = milliseconds / 1000;
  ts.tv_nsec = (milliseconds % 1000) * 1000000;
  nanosleep(&ts, NULL);
}

int main()
{
  int width = 40; // Width of the terminal line
  int position = 0;
  int direction = 1; // 1 for moving right, -1 for moving left

  while (1)
  { // Infinite loop for continuous animation
    // Print spaces up to the current position of the "ball"
    for (int i = 0; i < width; i++)
    {
      if (i == position)
      {
        for (int i = 1; i <= 5; i++)
        {
          for (int j = 1; j <= 5; j++)
          {
            if (i == 1 && j == 5)
              printf(TXT_RED "  *     *  ");
            if (i == 2 && j == 4)
              printf(TXT_GREEN "* *  *  * *");
            if (i == 3 && j == 3)
              printf(TXT_YELLOW " * * * * * ");
            if (i == 4 && j == 2)
              printf(TXT_BLUE "  * * * *  ");
            if (i == 5 && j == 1)
            {
              printf(TXT_MAGENTA "   * * *   ");
              printf("\n");
              printf(TXT_CYAN "     *");
              printf("\n");
              printf("\n");
            }
          }
          printf("\n");
          fflush(stdout); // Force immediate output
          delay(100);     // Delay for 100 milliseconds
          printf("\r");
        } // Ball is represented by 'O'
      }
      else
      {
        fflush(stdout);
        // Empty spaces
      }
    }

    // Return to the beginning of the line

    // Update the position and direction of the "ball"
    position += direction;

    // Reverse direction if the ball reaches the edges
    if (position == width - 1 || position == 0)
    {
      direction *= -1;
    }
  }

  return 0;
}
