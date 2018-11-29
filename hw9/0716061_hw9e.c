#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int length;
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *arr, int i, int j) {
    while (i <= j) {
        swap(arr + i, arr + j);
        i++;
        j--;
    }
}

int cmp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

void permute(char *, int);

int main() {
    char str[11] = {0};
    gets(str);
    length = strlen(str);
    qsort(str, length, sizeof(char), cmp);
    permute(str, 0);
    return 0;
}

void permute(char *arr, int i) {
    int j, k;
    if (i == factorial[length])
        return;
    for (j = length - 2; j > -1; j--)
        if (arr[j] < arr[j + 1])
            break;
    j = j > 0 ? j : 0;
    for (k = length - 1; k > j; k--)
        if (arr[k] > arr[j])
            break;
    puts(arr);
    swap(arr + j, arr + k);
    reverse(arr, j + 1, length - 1);
    permute(arr, i + 1);
}