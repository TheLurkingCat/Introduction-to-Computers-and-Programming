#include <memory.h>
#include <stdio.h>

int main() {
    char number[11];
    memset(number, 48, 10);
    int ans = 0, t = 1;
    printf("Please input n: ");
    scanf("%s", number);
    for (int i = 0; i < 9; i++) {
        printf("%c %c ", number[i], 44 + t);
        ans += (number[i] - 48) * t;
        t = -t;
    }
    printf("%c = %d\n", number[9], ans - number[9] + 48);
}