/*Solution to K&R EX1.9
Tracks current character (c) and last character (lastchar) - if both are ' '
then moves on to next character. If not then it prints (c) and updates
(lastchar)to (c) before moving onto the next input character */

#include <stdio.h>

int main (void ) {
  int c, lastchar;
  c = lastchar = 0;

  while ((c = getchar())!=EOF) {
    if (c == ' ' && lastchar == ' '){
      ;}
    else putchar(c);
    lastchar = c;
  }

  return 0;
}

