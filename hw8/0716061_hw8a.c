#include <stdio.h>

int main() {
    char upper_alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char lower_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char str[120], map[128];
    int i, n;
    gets(str);
    scanf("%d", &n);
    n %= 26;
    for (i = 0; i < 26; i++) {
        map[upper_alphabet[i]] = upper_alphabet[(i + n) % 26];
        map[lower_alphabet[i]] = lower_alphabet[(i + n) % 26];
    }
    map[' '] = ' ';
    for (i = 0; str[i]; i++)
        putchar(map[str[i]]);
    putchar('\n');
}