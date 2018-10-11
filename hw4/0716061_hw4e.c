#include <math.h>
#include <stdio.h>
int main() {
    int i, n, t, j, cnt, not_prime[100000] = {0};
    for (i = 2; i < 317; i++) {
        if (!not_prime[i]) {
            for (j = i * i; j < 100000; j += i) {
                not_prime[j] = 1;
            }
        }
    }
    printf("Please enter the final num : ");
    while (scanf("%d", &n) && n) {
        if (n > 1) {
            printf("2 ");
        }
        if (n >= 100000) {
            for (t = 3; t <= 100000; t += 2) {
                if (!not_prime[t]) {
                    printf("%d ", t);
                }
            }
            for (i = 100000; i < n; i++) {
                cnt = 0;
                for (j = 2; j < sqrt(n); j++) {
                    if (!(i % j)) {
                        cnt = 1;
                    }
                }
                if (!cnt) {
                    printf("%d ", i);
                }
            }
        } else {
            for (t = 3; t <= n; t += 2) {
                if (!not_prime[t]) {
                    printf("%d ", t);
                }
            }
        }
        printf("\nPlease enter the final num : ");
    }
    return 0;
}