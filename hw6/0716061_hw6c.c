#include <stdio.h>

/*  Input  : integer n
 *  Output : n-th number at fibonacci series
 */
int fib[100] = {0, 1, 1};
int fibNum(int n) {
    /* O(n) */
    if (n < 3) return 1;
    if (fib[n] != 0) return fib[n];
    fib[n] = fibNum(n - 1) + fibNum(n - 2);
    return fib[n];
}

/*  Input  : two integer a and b 
 *  Output : the Greatest Common Divisor of a and b
 */
int GCD(int a, int b) {
    int temp;
    if (b == 0)
        return a;
    return GCD(b, a % b);
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