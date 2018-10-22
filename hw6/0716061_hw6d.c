#include <stdio.h>
#include <stdlib.h>

/*  Input  : integer n
 *  Output : how many way to climb n stairs
 */
int climbStairs(int n) {
    int* stair = malloc((++n) * sizeof(int));
    int i;
    if (n < 5) {
        if (n == 3)
            return 2;
        else if (n == 2)
            return 1;
        else if (n == 4)
            return 4;
        else
            return 0;
    }
    stair[1] = 1;
    stair[2] = 2;
    stair[3] = 4;
    for (i = 4; i < n; i++) {
        stair[i] = stair[i - 1] + stair[i - 2] + stair[i - 3];
    }
    return stair[n - 1];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", climbStairs(n));
    return 0;
}