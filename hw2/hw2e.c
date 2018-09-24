#include <stdio.h>

int main(void) {
  int c;
  printf("Please enter a char: ");
  c = getchar();
  printf("The uppercase char is %c.\n", (c <= 122 && c >= 97) ? c - 32 : c);
  return 0;
}