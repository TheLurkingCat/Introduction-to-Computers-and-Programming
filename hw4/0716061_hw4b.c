#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 1024, i = 0;
    char* str = malloc(1024);
    char c;

    printf("Please enter the string you want to print : ");
    while ((c = getchar()) != '\n') {
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