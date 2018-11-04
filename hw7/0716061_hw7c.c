#include <stdio.h>

int main() {
    double x, ans;
    scanf("%lf", &x);
    ans = (13 * x + 30) / (10 * x + 23);
    if ((int)ans == ans)
        printf("%d", (int)ans);
    else
        printf("%.5lf", ans);
    return 0;
}