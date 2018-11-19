#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a > *(int*)b) ? 1 : -1;
}

int binary_search(int left, int right, int target, int* arr);

int main(void) {
    int i, m, n, arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    qsort(arr, n, sizeof(int), cmp);
    scanf("%d", &m);
    printf("%d\n", binary_search(0, n, m, arr));
    return 0;
}

int binary_search(int left, int right, int target, int* arr) {
    if (left == right)
        return -1;
    int mid = (left + right) / 2;
    if (target > arr[mid])
        binary_search(mid, right, target, arr);
    else if (target < arr[mid])
        binary_search(left, mid, target, arr);
    else
        return mid;
}