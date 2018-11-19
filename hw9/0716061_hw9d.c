#include <stdio.h>

void hanoi(int n);

int ans;

int main() {
    int n;
    scanf("%d", &n);
    hanoi(n);
    printf("%d\n", ans);
    return 0;
}

void hanoi(int n) {
    ans++;
    if (n != 1) {
        hanoi(n - 1);
        hanoi(n - 1);
    }
}