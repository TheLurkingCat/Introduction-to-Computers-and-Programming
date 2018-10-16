#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, t, j, matrix[30][30], row[30] = {0}, column[30] = {0};

    printf("Please input the size of array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Input row %d: ", i + 1);
        for (j = 0; j < n; j++) {
            scanf("%d", &t);
            matrix[i][j] = t;
            row[i] += matrix[i][j];
            column[j] += matrix[i][j];
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