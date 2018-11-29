#include <stdio.h>

void queens(int, int, int);

int max, ans, n;

int main() {
    scanf("%d", &n);
    max = (1 << n) - 1;
    queens(0, 0, 0);
    printf("%d\n", ans);
    return 0;
}

void queens(int row, int dig_right, int dig_left) {
    if (row == max)
        ans++;
    else {
        int pos = max & ~(row | dig_right | dig_left), p;
        while (pos) {
            p = pos & (~pos) + 1;
            pos ^= p;
            queens(row | p, (dig_right | p) << 1, (dig_left | p) >> 1);
        }
    }
}