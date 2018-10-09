#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    if (*(int*)a > *(int*)b) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int i, n, t, arr[4];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (t = 0; t < 4; t++) {
            scanf("%d", arr + t);
        }

        qsort(arr, 4, sizeof(int), cmp);

        if (arr[0] == arr[1] && arr[2] == arr[3]) {
            if (arr[1] == arr[2]) {
                printf("square\n");
            } else {
                printf("rectangle\n");
            }
        } else if (arr[0] + arr[1] + arr[2] > arr[3]) {
            printf("quadrangle\n");
        } else {
            printf("nothing\n");
        }
    }
    return 0;
}