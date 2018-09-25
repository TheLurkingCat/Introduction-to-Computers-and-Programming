#include <ctype.h>
#include <stdio.h>

int main(void) {
    printf("Please enter a char: ");
    printf("The uppercase char is %c.\n", toupper(getchar()));
    return 0;
}