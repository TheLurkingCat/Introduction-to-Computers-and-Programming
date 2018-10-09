#include <memory.h>
#include <stdio.h>

int main() {
    int i, n, t, j, is_prime[100000];
    memset(is_prime, 1, 100000);
    for (i = 2; i < 317; i++) {
        if (is_prime[i]) {
            for (j = i * i; j < 100000; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    printf("Please enter the final num : ");
    while (scanf("%d", &n) && n) {
        if (n > 1) {
            printf("2 ");
        }
        for (t = 3; t <= n; t += 2) {
            if (is_prime[t]) {
                printf("%d ", t);
            }
        }
        printf("\nPlease enter the final num : ");
    }
    return 0;
}