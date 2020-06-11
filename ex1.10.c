/*Solution to K&R EX1.10

Was very tempted to use PRINTF for the substituted characters as I had some difficulty getting it to compile using PUTCHAR.
Finally realised this was because I was effectively trying to print both characters (backslash and letter) in a single
PUTCHAR. Once I split each character across a seperate PUTCHAR statement it compiled and worked*/

#include <stdio.h>

int main (void ) {
  char c;

  while ((c = getchar())!=EOF) {
    if (c == '\t'){
      putchar('\\');
      putchar('t');}
    if (c == '\b') {
      putchar('\\');
      putchar('b');}
    if (c == '\\') {
      putchar('\\');
      putchar('\\');}
    else putchar(c);
  }

  return 0;
}

