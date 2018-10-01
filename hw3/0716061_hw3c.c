#include <memory.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[10];
    memset(str, 48, 9);
    printf("Please input n: ");
    scanf("%s", str);
    for (int i = 0; i < 4; i++) {
        str[8 - i] ^= str[i];
        str[i] ^= str[8 - i];
        str[8 - i] ^= str[i];
    }
    printf("%d\n", atoi(str));
}
