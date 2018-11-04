#include <stdio.h>

int main() {
    /* O(1) */
    int n;
    char number[9] = {'9', '1', '2', '3', '4', '5', '6', '7', '8'};
    while (scanf("%d", &n) == 1 && n != 0) {
        putchar(number[n % 9]);
        putchar('\n');
    }
}