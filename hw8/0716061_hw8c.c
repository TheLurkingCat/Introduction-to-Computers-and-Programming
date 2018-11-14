#include <stdio.h>
#include <stdlib.h>

int scan(void) {
    int c, i = 0;
    char str[10];
    while ((c = getchar()) != '\n' && c != -1) {
        if (c < 58 && c > 47)
            str[i++] = c;
    }
    str[i] = 0;
    return atoi(str);
}

int main() {
    int c, num1, num2, num3, i = 0;
    char str[200];
    num1 = scan();
    num2 = scan();
    num3 = scan();
    printf("%d\n", num1 + num2 + num3);
}