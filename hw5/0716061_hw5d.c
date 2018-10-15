#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str_odd[31], str_even[31];
    int n, c, i = 0;
    printf("Please input a string:");
    while ((c = getchar()) != '\n' && c != -1) {
        if (i & 1) {
            str_odd[i] = c;
            str_even[i] = '*';
        } else {
            str_odd[i] = '*';
            str_even[i] = c;
        }
        i++;
    }
    str_even[i] = str_odd[i] = '\0';
    printf("Please input a number N:");
    scanf("%d", &n);
    if (n & 1) {
        printf("N is an odd number.\nThe code is %s\n", str_odd);
    } else {
        printf("N is an even number.\nThe code is %s\n", str_even);
    }
    return 0;
}