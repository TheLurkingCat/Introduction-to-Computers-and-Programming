#include <stdio.h>
#include <stdlib.h>

int size = 128;

void print(int n) {
    if (n < 0) return;
    int i = 0;
    char* str = malloc(128);
    char c;
    while ((c = getchar()) != '\n' && c != -1) {
        str[i++] = c;
        if (i == size) {
            size += i;
            str = realloc(str, size);
        }
    }
    str[i] = '\0';
    print(--n);
    printf("%s", str);
    free(str);
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