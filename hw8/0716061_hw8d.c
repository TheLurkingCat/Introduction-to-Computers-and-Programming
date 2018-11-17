#include <stdio.h>
#include <stdlib.h>

struct number {
    int value, mod;
};

int cmp(const void *a, const void *b) {
    const struct number *element1 = a;
    const struct number *element2 = b;
    int x = element1->value & 1, y = element2->value & 1;
    if (element1->mod == element2->mod) {
        if (x == y) {
            if (x == 1)
                return element2->value - element1->value;
            else
                return element1->value - element2->value;
        } else
            return y - x;
    }
    return element1->mod - element2->mod;
}
int main() {
    int n, m, t, i;
    struct number arr[10000];
    while (1) {
        scanf("%d %d", &n, &m);
        printf("%d %d\n", n, m);
        i = 0;
        if (!(n || m))
            break;
        while (n--) {
            scanf("%d", &t);
            arr[i].value = t;
            arr[i].mod = t % m;
            i++;
        }
        qsort(arr, i, sizeof(arr[0]), cmp);
        for (int j = 0; j < i; j++)
            printf("%d\n", arr[j].value);
    }
}