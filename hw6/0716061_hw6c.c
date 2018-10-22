#include <stdio.h>

/*  Input  : integer n
 *  Output : n-th number at fibonacci series
 */
int fibNum(int n) {
    if (n < 3) return 1;
    int a = 1, b = 1, i;
    for (i = 2; i < n; i++) {
        a ^= b;
        b ^= a;
        a ^= b;
        a += b;
    }
    return a;
}

/*  Input  : two integer a and b 
 *  Output : the Greatest Common Divisor of a and b
 */
int GCD(int a, int b) {
    while (b != 0) {
        a %= b;
        a ^= b;
        b ^= a;
        a ^= b;
    }

    return a;
}

int main() {
    int mode;
    scanf("%d", &mode);

    if (mode == 0) {
        int n;
        scanf("%d", &n);
        printf("%d", fibNum(n));
    }

    else if (mode == 1) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d", GCD(a, b));
    }

    return 0;
}