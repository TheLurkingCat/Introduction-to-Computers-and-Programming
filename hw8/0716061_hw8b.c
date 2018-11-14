#include <stdio.h>
#include <string.h>
#define max(x, y) (x) > (y) ? (x) : (y)

int trans(char* str, int* num) {
    int n = strlen(str), i = 0, t;
    t = n;
    n--;
    while (n > -1)
        num[n--] = str[i++] - 48;
    return t;
}

void add(int* num1, int* num2, int* ans, int length) {
    int i;
    for (i = 0; i < length; i++) {
        ans[i] = num1[i] + num2[i];
    }
    for (i = 0; i < length - 1; i++) {
        ans[i + 1] += (ans[i] / 10);
        ans[i] %= 10;
    }
}

int main() {
    char temp[200];
    int num1[200] = {0}, num2[200] = {0}, ans[200] = {0}, t = 0, i;
    scanf("%s", temp);
    t = trans(temp, num1);
    scanf("%s", temp);
    t = max(trans(temp, num2), t);

    add(num1, num2, ans, t);
    for (i = t - 1; i > -1; i--)
        printf("%d", ans[i]);
    putchar('\n');
}