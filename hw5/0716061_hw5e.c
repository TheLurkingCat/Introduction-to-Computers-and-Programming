#include <stdio.h>

void print(int n) {
    if (n < 1) return;
    char str[201];
    scanf("%s", str);
    print(--n);
    printf("%s", str);
}

int main() {
    int i;
    while (scanf("%d", &i) == 1) {
        if (i > 0) {
            print(i);
            printf("\n");
        }
    }
    return 0;
}