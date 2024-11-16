#include <stdio.h>
// Reset to default
#define RESET       "\x1b[0m"  //Or \033[0;0m

// Text colors
#define TXT_BLACK   "\x1b[30m"// Or \033[0;30m
#define TXT_RED     "\x1b[31m"// Or \033[0;31m
#define TXT_GREEN   "\x1b[32m"//Or \033[0;32m
#define TXT_YELLOW  "\x1b[33m"//Or \033[0;33m
#define TXT_BLUE    "\x1b[34m"//Or \033[0;34m
#define TXT_MAGENTA "\x1b[35m"//Or \033[0;35m
#define TXT_CYAN    "\x1b[36m"//Or \033[0;36m
#define TXT_WHITE   "\x1b[37m"//Or \033[0;37m

// Background colors
#define BG_BLACK    "\x1b[40m"//Or \033[0;40m
#define BG_RED      "\x1b[41m"//Or \033[0;41m
#define BG_GREEN    "\x1b[42m"//Or \033[0;42m
#define BG_YELLOW   "\x1b[43m"//Or \033[0;43m
#define BG_BLUE     "\x1b[44m"//Or \033[0;44m
#define BG_MAGENTA  "\x1b[45m"//Or \033[0;45m
#define BG_CYAN     "\x1b[46m"//Or \033[0;46m
#define BG_WHITE    "\x1b[47m"//Or \033[0;47m
int main()
{
printf(TXT_WHITE BG_BLACK"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_WHITE BG_RED"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_BLACK BG_GREEN"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_BLACK BG_YELLOW"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_WHITE BG_BLUE"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_BLACK BG_MAGENTA"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_BLACK BG_CYAN"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_BLACK BG_WHITE"   ||   Radhe   Radhe   ||  "RESET"\n");
printf(TXT_BLACK"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_RED"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_GREEN"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_YELLOW"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_BLUE"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_MAGENTA"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_CYAN"   ||   Radhe   Radhe   ||  ""\n");
printf(TXT_WHITE"   ||   Radhe   Radhe   ||  ""\n");
  return 0;
}
