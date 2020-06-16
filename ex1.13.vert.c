/* A program to produce a histogram of the length of
   words entered by the user. This is the 'vertical print' version */

#include <stdio.h>

int main (void)
{
  int c, count, i, line;
  int wordlen[20];

  count = line = 0;
  for (i = 0; i < 20; ++i) {
    wordlen[i] = 0;}

  printf("Please enter a sentence :\n\n");

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c != '\n') {
      ++count;} //If character entered is not 'blank' then increase word length counter
    else {
      ++wordlen[count-1]; //If character is blank, increase word length array entry by 1
      count = 0;} //reset word length counter
  }

  printf("\nI will now print a histogram showing the lengths of the words you entered :\n\n");

  for (line = 10; line > 0; --line) {
    for (i = 1; i < 20; ++i) {
      if (wordlen[i-1] >= line)
	printf("  *");
      else if (wordlen[i-1] < line)
	printf("   ");
    }
    printf("\n");
  }
  for (i = 1; i < 20; ++i)
    printf("%3d", i);

  printf("\n");

  return 0;
}
    
