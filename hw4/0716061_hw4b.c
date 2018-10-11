#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 128, i = 0;
    char* str = malloc(128);
    char c;

    printf("Please enter the string you want to print : ");
    while ((c = getchar()) != '\n' && c != -1) {
        str[i++] = c;
        if (i == size) {
            size += i;
            str = realloc(str, size);
        }
    }
    str[i] = '\0';
    puts(str);
    free(str);
    return 0;
}