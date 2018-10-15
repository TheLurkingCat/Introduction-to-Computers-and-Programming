#include <stdio.h>

int not_prime[290000] = {0};
int main() {
    int i, prime[25001], t = 1, j, n;
    for (i = 2; i < 539; i++) {
        if (!not_prime[i]) {
            prime[t++] = i;
            for (j = i * i; j < 290000; j += i) {
                not_prime[j] = 1;
            }
        }
    }
    for (i = 539; i < 290000; i++) {
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