#include <stdio.h>

void queens(int row, int left, int right);

int max, ans, n;

int main() {
    scanf("%d", &n);
    max = (1 << n) - 1;
    queens(0, 0, 0);
    printf("%d\n", ans);
    return 0;
}

void queens(int row, int left, int right) {
    if (row == max)
        ans++;
    else {
        int pos = max & ~(row | left | right), put;
        while (pos) {
            put = pos & (~pos) + 1;
            pos -= put;
            queens(row | put, (left | put) << 1, (right | put) >> 1);
        }
    }
}