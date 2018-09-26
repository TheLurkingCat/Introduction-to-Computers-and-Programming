#include <stdio.h>

int main(void) {
    double number;
    while (printf("Please enter a number: ") && scanf("%lf", &number) &&
           number != -1) {
        printf("The number is ");
        printf((int)number & 1 ? "odd" : "even");
        printf(".\n");
    }
    return 0;
}