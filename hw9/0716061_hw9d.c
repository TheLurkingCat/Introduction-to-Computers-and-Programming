#include <stdio.h>

void hanoi(int n, int start, int end, int temp, int* sum);

int main() {
    int n, step = 0;
    scanf("%d", &n);
    hanoi(n, 1, 3, 2, &step);
    printf("%d\n", step);
    return 0;
}

void hanoi(int n, int start, int end, int temp, int* sum) {
    (*sum)++;
    if (n != 1) {
        hanoi(n - 1, start, temp, end, sum);
        hanoi(n - 1, temp, end, start, sum);
    }
}