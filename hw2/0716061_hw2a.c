#include <stdio.h>

int main(void) {
    printf("char's memory size: %d byte%c\n", sizeof(char),
           's' * (sizeof(char) - 1));
    printf("short's memory size: %d bytes\n", sizeof(short),
           's' * (sizeof(short) - 1));
    printf("int's memory size: %d bytes\n", sizeof(int), 's' * (sizeof(int) - 1));
    printf("float's memory size: %d bytes\n", sizeof(float),
           's' * (sizeof(float) - 1));
    printf("double's memory size: %d bytes\n", sizeof(double),
           's' * (sizeof(double) - 1));
    return 0;
}