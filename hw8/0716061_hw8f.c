#include <stdio.h>
int i, t = 2, j, n, not_prime[1000000] = {0, 0, 1}, prime[65536] = {0, 2};

int main() {
    int flag = 0, not_found = 1;
    long long cnt, temp1, temp2, num = 1, sum = 1, k;
    for (j = 4; j < 1000000; j += 2)
        not_prime[j] = 1;

    for (i = 3; i < 1000; i += 2) {
        if (!not_prime[i]) {
            prime[t++] = i;
            for (j = i * i; j < 1000000; j += i)
                not_prime[j] = 1;
        }
    }
    for (i = 1000; i < 1000000; i++) {
        if (!not_prime[i]) {
            prime[t++] = i;
            if (t == 65536)
                break;
        }
    }

    while (scanf("%lld", &k) == 1) {
        t = 1;
        i = prime[t];
        flag = 0;
        num = sum = 1;
        not_found = 1;
        printf("%lld = ", k);
        while (k != 1) {
            cnt = 0;
            if (k % i == 0) {
                cnt = 0;
                temp1 = 1;
                temp2 = 1;
                while (k % i == 0) {
                    k /= i;
                    cnt++;
                }
                for (j = 0; j < cnt; j++) {
                    temp2 *= i;
                    temp1 += temp2;
                }
                sum *= temp1;
                num *= (cnt + 1);
                if (flag)
                    printf("x%d^%lld", i, cnt);
                else {
                    flag = 1;
                    not_found = 0;
                    printf("%d^%lld", i, cnt);
                }
            }
            t++;
            if (t > 65535)
                break;
            i = prime[t];
        }
        if (k != 1) {
            if (not_found)
                printf("%lld^1\nNumber of divisors = 2\nSum of divisors = %lld", k, k + 1);
            else
                printf("x%lld^1\nNumber of divisors = %lld\nSum of divisors = %lld", k, num * 2, sum * (k + 1));
        } else
            printf("\nNumber of divisors = %lld\nSum of divisors = %lld", num, sum);
        printf("\n\n");
    }
}