#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[11];
    long long ans;
    memset(str, 48, 10);
    printf("Please input n: ");
    scanf("%s", str);
    for (int i = 0; i < 5; i++) {
        str[9 - i] ^= str[i];
        str[i] ^= str[9 - i];
        str[9 - i] ^= str[i];
    }
    ans = atoll(str);
    if (ans > 2147483647) {
        printf("overflow\n");
    } else {
        printf("%lld\n", ans);
    }
}