#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b) {
    return (*(char*)a > *(char*)b) ? 1 : -1;
}
/*  Input  : string s
 *  Output : sorted string s'
 */
char* sortString(char* str, int len) {
    qsort(str, len, sizeof(char), cmp);
    return str;
}

int main() {
    char s[100];
    scanf("%s", s);
    int len = strlen(s);
    printf("%s", sortString(s, len));
    return 0;
}