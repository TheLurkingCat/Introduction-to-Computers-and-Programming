#include <stdio.h>

int main() {
    int row, column, i, j, matrix[30][30], temp;

    printf("Please input the size of the 2d-arrays: ");
    scanf("%d %d", &row, &column);
    printf("\nFirst 2d-array:\n");

    for (i = 0; i < row; i++) {
        printf("%d row: ", i + 1);
        for (j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nSecond 2d-array:\n");

    for (i = 0; i < row; i++) {
        printf("%d row: ", i + 1);
        for (j = 0; j < column; j++) {
            scanf("%d", &temp);
            matrix[i][j] += temp;
        }
    }

    printf("\nAnswer:\n");

    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}