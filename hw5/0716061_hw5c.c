#include <ctype.h>
#include <stdio.h>

int main() {
    int n = getchar();
    if (isalpha(n)) {
        if (islower(n)) {
            printf("%c is a lowercase letter, and its uppercase is %c.\n", n, toupper(n));
        } else {
            printf("%c is a uppercase letter, and its lowercase is %c.\n", n, tolower(n));
        }
    } else if (isdigit(n)) {
        printf("%c is a number.\n", n);
    } else {
        puts("Illegal input!");
    }
    return 0;
}
