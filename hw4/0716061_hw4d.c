#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) {
        return 1;
    } else {
        return -1;
    }
}

int main(void) {
    int i, n, t;
    int* arr;
    while (printf("Please enter the number of elements : ") && scanf("%d", &n) && n) {
        arr = malloc(n * sizeof(int));
        for (i = 0; i < n; i++) {
            printf("The %d element is : ", i + 1);
            scanf("%d", arr + i);
        }

        qsort(arr, n, sizeof(int), cmp);

        for (i = 0; i < n; i++) {
            printf("%d ", *(arr + i));
        }
        printf("\n");
        free(arr);
    }
    return 0;
}