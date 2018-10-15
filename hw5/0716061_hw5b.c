#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, t, arr1[30][30], row[30] = {0}, column[30] = {0};

    printf("Please input the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Input row %d: ", i + 1);
        for (t = 0; t < n; t++) {
            scanf("%d", &arr1[i][t]);
        }
    }
    for (i = 0; i < n; i++) {
        for (t = 0; t < n; t++) {
            row[i] += arr1[i][t];
            column[t] += arr1[i][t];
        }
    }
    printf("\nRow totals:");
    for (i = 0; i < n; i++) {
        printf(" %d", row[i]);
    }
    printf("\nColumn totals:");
    for (i = 0; i < n; i++) {
        printf(" %d", column[i]);
    }
    printf("\n");
    return 0;
}