/* Solution to exercise 1.8
It just extends the 'counting newlines' example to include tabs and
blank spaces */

#include <stdio.h>

int main() {
  int c, nl, tab, blank;

  nl = 0; // newlines counter
  tab = 0; // tab counter
  blank = 0; // blanks counter

  while ((c = getchar()) != EOF) {
    
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++tab;
    if (c == ' ')
      ++blank;
  }
  printf ("\nThere are :\n%d newlines\n%d tabs\n%d spaces\n", nl, tab, blank);

  return 0;
}
  
