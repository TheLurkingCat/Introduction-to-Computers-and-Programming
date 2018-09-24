#include <stdio.h>

int main(void) {
  int c;
  printf("Please enter a char: ");
  c = getchar();
  printf("your char is '%c', it ASCII code is %d.\n", c, c);
  return 0;
}