#include <stdio.h>

int main (void)
{
  int c, state, count, i;
  int wordlen[20];

  state = count = 0;
  for (i = 0; i < 20; ++i) {
    wordlen[i] = 0;}

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\t' && c!= '\n') {
      ++count;}
    else {
      ++wordlen[count-1];
      count = 0;}
  }

  for (i = 1; i < 20; ++i) {
    printf("%2d :", i);
    for (count = 0; count < wordlen[i-1]; ++count)
    printf("*");
    printf("\n");}

  return 0;
}
    
