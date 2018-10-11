#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a > *(int*)b) ? 1 : -1;
}

int main() {
    int i, n, t, j, k, arr[4];
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);

        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3 - j; k++) {
                if (arr[k + 1] < arr[k]) {
                    arr[k + 1] ^= arr[k];
                    arr[k] ^= arr[k + 1];
                    arr[k + 1] ^= arr[k];
                }
            }
        }

        if (arr[0] <= 0) {
            puts("nothing");
        } else if (arr[0] == arr[1] && arr[2] == arr[3]) {
            if (arr[1] == arr[2]) {
                puts("square");
            } else {
                puts("rectangle");
            }
        } else if (arr[0] + arr[1] + arr[2] > arr[3]) {
            puts("quadrangle");
        } else {
            puts("nothing");
        }
    }
    return 0;
}