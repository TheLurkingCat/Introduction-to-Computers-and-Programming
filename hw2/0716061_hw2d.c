#include <stdio.h>

int main(void) {
    printf("Please enter a char: ");
    int c = getchar();
    printf("your char is '%c', it ASCII code is %d.\n", c, c);
    return 0;
}