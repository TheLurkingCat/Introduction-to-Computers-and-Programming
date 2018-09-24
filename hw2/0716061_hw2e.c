#include <stdio.h>

int main(void) {
    printf("Please enter a char: ");
    int c = getchar();
    printf("The uppercase char is %c.\n", (c <= 122 && c >= 97) ? c - 32 : c);
    return 0;
}