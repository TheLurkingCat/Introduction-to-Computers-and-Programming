#include <stdio.h>

void print(int number) {
    if (number) {
        print(number >> 1);
        printf("%d", number & 1);
    }
}

int main() {
    int n;
    while (printf("Please enter a decimal integer : ") && scanf("%d", &n) && n) {
        print(n);
        printf("\n%o\n%x\n", n, n);
    }
    return 0;
}
