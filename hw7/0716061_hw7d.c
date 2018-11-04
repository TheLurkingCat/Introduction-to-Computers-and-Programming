#include <math.h>
#include <stdio.h>

int main() {
    double u, v, a, b, c, dist;
    scanf("%lf %lf %lf %lf %lf", &u, &v, &a, &b, &c);
    dist = fabs(a * u + b * v - c) / sqrt(a * a + b * b);
    printf("%.5lf\n", dist);
    return 0;
}