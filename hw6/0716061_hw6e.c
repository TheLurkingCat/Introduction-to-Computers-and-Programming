#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    return (*(char*)a > *(char*)b) ? 1 : -1;
}

int main() {
    char s[100];
    scanf("%s", &s);
    qsort(s, strlen(s), sizeof(char), cmp);
    printf("%s", s);
    return 0;
}