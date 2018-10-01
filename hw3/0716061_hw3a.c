#include <stdio.h>

int main() {
    int a1, a2, b1, b2;
    long long d;
    double dist;
    printf("Please input Point A and Point B: ");
    scanf("A(%d,%d) B(%d,%d)", &a1, &a2, &b1, &b2);
    printf("Please input Dist: ");
    scanf("%lf", &dist);
    dist *= dist;
    d = (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2);
    if (dist == d) {
        printf("=\n");
    } else {
        printf(d > dist ? ">\n" : "<\n");
    }
}