#include <stdio.h>

int main() {
    int row, column, i, n, t, arr1[30][30], arr2[30][30];

    printf("Please input the size of the 2d-arrays: ");
    scanf("%d %d", &row, &column);
    n = row * column;
    printf("\nFirst 2d-array:\n");
    for (i = 0; i < row; i++) {
        printf("%d row: ", i + 1);
        for (t = 0; t < column; t++) {
            scanf("%d", &arr1[i][t]);
        }
    }
    printf("\nSecond 2d-array:\n");
    for (i = 0; i < row; i++) {
        printf("%d row: ", i + 1);
        for (t = 0; t < column; t++) {
            scanf("%d", &arr2[i][t]);
        }
    }
    printf("\nAnswer:\n");
    for (i = 0; i < row; i++) {
        for (t = 0; t < column; t++) {
            printf("%d\t", arr1[i][t] + arr2[i][t]);
        }
        printf("\n");
    }
    return 0;
}