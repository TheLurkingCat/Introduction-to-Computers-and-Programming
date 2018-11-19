#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *arr, int i, int length);

int main() {
    char str[1000];
    gets(str);
    permute(str, 0, strlen(str));
    return 0;
}

void permute(char *arr, int i, int length) {
    int j;
    if (i == length) {
        for (j = 0; j < length; j++)
            putchar(arr[j]);
        putchar('\n');
    } else {
        for (j = i; j < length; j++) {
            swap(arr + i, arr + j);
            permute(arr, i + 1, length);
            swap(arr + i, arr + j);
        }
    }
}