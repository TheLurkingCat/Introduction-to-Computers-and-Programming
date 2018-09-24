#include <stdio.h>

int main(void) {
  long long number;
  printf("Please enter a number: ");
  while (scanf("%lld", &number) && number != -1) {
    printf("The number is ");
    printf(number & 1 ? "odd" : "even");
    printf(".\nPlease enter a number: ");
  }
  return 0;
}