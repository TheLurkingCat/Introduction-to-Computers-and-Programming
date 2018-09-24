#include <stdio.h>

int main(void) {
  printf("char's memory size: %d byte\n", sizeof(char));
  printf("short's memory size: %d bytes\n", sizeof(short));
  printf("int's memory size: %d bytes\n", sizeof(int));
  printf("float's memory size: %d bytes\n", sizeof(float));
  printf("double's memory size: %d bytes\n", sizeof(double));
  return 0;
}