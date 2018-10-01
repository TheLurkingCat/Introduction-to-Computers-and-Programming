#include <stdio.h>

int main(void) {
    int fib[11] = {0, 1}, n;
    for (int i = 2; i < 11; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("Please input n: ");
    scanf("%d", &n);
    printf("%d\n", fib[n]);
}