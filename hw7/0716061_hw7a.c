#include <stdio.h>

int main() {
    long long i, n, t = 1;
    scanf("%lld", &n);
    for (i = 2; i <= n; i++)
        t *= i;
    printf("%lld\n", t);
    return 0;
}