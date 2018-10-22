#include <stdio.h>
#include <stdlib.h>
#define swap(X, Y) \
    (X) ^= (Y);    \
    (Y) ^= (X);    \
    (X) ^= (Y);

/*  Input  : integer n
 *  Output : how many way to climb n stairs
 */
int climbStairs(int n) {
    /* O(n) */
    int a = 1, b = 2, c = 4, i;
    switch (n) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 4;
        default:
            for (i = 3; i < n; i++) {
                swap(a, b);
                swap(b, c);
                c += a + b;
            }
            return c;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", climbStairs(n));
    return 0;
}