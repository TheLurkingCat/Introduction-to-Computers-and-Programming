#include <stdio.h>

int SUM(int n, int now);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", SUM(n, 1));
    return 0;
}

int SUM(int n, int now) {
    if (n == now)
        return now;
    return now + SUM(n, now + 1);
}