#include <stdio.h>

int main() {
    int i, n, t;
    printf("Please enter the number of multiplication table you want : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (t = 1; t <= n; t++) {
            printf("%d\t", i * t);
        }
        printf("\n");
    }
    return 0;
}