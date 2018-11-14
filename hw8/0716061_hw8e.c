#include <stdio.h>
int i, t = 2, j, n, not_prime[1000000] = {0, 0, 1}, prime[65536] = {0, 2};

int main() {
    int k, cnt, flag = 0, not_found = 1;
    for (j = 4; j < 1000000; j += 2) {
        not_prime[j] = 1;
    }
    for (i = 3; i < 1000; i += 2) {
        if (!not_prime[i]) {
            prime[t++] = i;
            for (j = i * i; j < 1000000; j += i) {
                not_prime[j] = 1;
            }
        }
    }
    for (i = 1000; i < 1000000; i++) {
        if (!not_prime[i]) {
            prime[t++] = i;
            if (t == 65536) {
                break;
            }
        }
    }

    while (scanf("%d", &k) == 1) {
        t = 1;
        i = prime[t];
        flag = 0;
        not_found = 1;
        printf("%d = ", k);
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
            if (t > 65535) {
                break;
            }
            i = prime[t];
        }
        if (k != 1) {
            if (not_found)
                printf("%d^1", k);
            else
                printf("x%d^1", k);
        }

        printf("\n\n");
    }
}