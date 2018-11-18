#include <stdio.h>
int i, t = 2, j, n, not_prime[65540] = {0, 0, 1}, prime[6545] = {0, 2};

int main() {
    int cnt, flag = 0, not_found = 1;
    long long k;
    for (j = 4; j < 65540; j += 2) {
        not_prime[j] = 1;
    }
    for (i = 3; i < 257; i += 2) {
        if (!not_prime[i]) {
            prime[t++] = i;
            for (j = i * i; j < 65540; j += i) {
                not_prime[j] = 1;
            }
        }
    }
    for (i = 257; i < 65540; i++) {
        if (!not_prime[i]) {
            prime[t++] = i;
            if (t == 6543) {
                break;
            }
        }
    }

    while (scanf("%lld", &k) == 1) {
        t = 1;
        i = prime[t];
        flag = 0;
        not_found = 1;
        printf("%lld = ", k);
        while (k != 1) {
            cnt = 0;
            if (k % i == 0) {
                cnt = 0;
                while (k % i == 0) {
                    k /= i;
                    cnt++;
                }
                if (flag)
                    printf("x%d^%d", i, cnt);
                else {
                    flag = 1;
                    not_found = 0;
                    printf("%d^%d", i, cnt);
                }
            }
            t++;
            if (t > 6542) {
                break;
            }
            i = prime[t];
        }
        if (k != 1) {
            if (not_found)
                printf("%lld^1", k);
            else
                printf("x%lld^1", k);
        }

        printf("\n\n");
    }
}