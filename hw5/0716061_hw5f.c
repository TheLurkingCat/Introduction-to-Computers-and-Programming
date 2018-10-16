#include <stdio.h>

int i, t = 2, j, n, not_prime[287118] = {0, 0, 1}, prime[25001] = {0, 2};

int main() {
    for (j = 4; j < 287118; j += 2) {
        not_prime[j] = 1;
    }
    for (i = 3; i < 536; i += 2) {
        if (!not_prime[i]) {
            prime[t++] = i;
            for (j = i * i; j < 287118; j += i) {
                not_prime[j] = 1;
            }
        }
    }
    for (i = 536; i < 287118; i++) {
        if (!not_prime[i]) {
            prime[t++] = i;
            if (t == 25001) {
                break;
            }
        }
    }
    while (scanf("%d", &n) == 1) {
        printf("%d\n", prime[n]);
    }
    return 0;
}