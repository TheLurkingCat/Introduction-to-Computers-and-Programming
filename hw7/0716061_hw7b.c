#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) return 1;
    if (exp == 1) return base;
    long long ans = power(base, exp / 2);
    return exp & 1 ? ans * ans * base : ans * ans;
}

int main() {
    /* O(nlogk) */
    int i, k;
    long long t, n, sum = 1;
    scanf("%d %lld", &k, &n);
    switch (k) {
        case 0:
            printf("%lld\n", n);
            break;
        case 1:
            printf("%lld\n", n * (n + 1) / 2);
            break;
        case 2:
            printf("%lld\n", n * (n + 1) * (2 * n + 1) / 6);
            break;
        case 3:
            t = n * (n + 1) / 2;
            printf("%lld\n", t * t);
            break;
        default:
            for (i = 2; i <= n; i++)
                sum += power(i, k);
            printf("%lld\n", sum);
            break;
    }
    return 0;
}