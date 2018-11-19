#include <stdio.h>

int SUM(int now);

int n;
int main() {
    scanf("%d", &n);
    printf("%d\n", SUM(1));
    return 0;
}

int SUM(int now) {
    return n == now ? now : now + SUM(now + 1);
}