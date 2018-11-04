#include <stdio.h>

int main() {
    int n;
    double a = 3;
    scanf("%d", &n);
    if (n == 1)
        puts("3");
    else if (n > 58)
        puts("1");
    else {
        for (int t = 1; t < n; t++)
            a = (4 * a + 1) / 5;
        printf("%.5lf\n", a);
    }
    return 0;
}