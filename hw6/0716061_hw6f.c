#include <stdio.h>

#define min(X, Y) (X) < (Y) ? (X) : (Y)
#define max(X, Y) (X) > (Y) ? (X) : (Y)
struct minmax {
    int max, min;
};

int maxProfit(int* prices, int pricesSize) {
    /* O(N^2) */
    struct minmax profits[100][100];
    int i, j, left, right, ans = 0, last_min, last_max;
    if (pricesSize == 1)
        return 0;
    if (pricesSize == 2)
        return prices[1] > prices[0] ? prices[1] - prices[0] : 0;
    if (pricesSize == 3) {
        for (i = 0; i < pricesSize - 1; i++)
            for (j = i + 1; j < pricesSize; j++)
                ans = max((prices[j] - prices[i]), ans);
        return ans;
    }
    for (i = 0; i < pricesSize; i++) {
        last_min = 2147483647, last_max = -2147483647;
        for (j = i; j < pricesSize; j++) {
            last_max = max(last_max, prices[j]);
            last_min = min(last_min, prices[j]);
            profits[i][j].min = last_min;
            profits[i][j].max = last_max;
        }
    }
    for (i = 0; i < pricesSize; i++) {
        left = right = 0;
        for (j = 1; j < i; j++) {
            left = max(profits[j][i - 1].max - profits[0][j - 1].min, left);
        }
        for (j = i; j < pricesSize; j++) {
            right = max(profits[j][pricesSize - 1].max - profits[i][j].min, right);
        }
        ans = max(ans, right + left);
    }

    return ans;
}

int main() {
    int pricesSize;
    int prices[100];

    scanf("%d", &pricesSize);
    for (int i = 0; i < pricesSize; i++) {
        scanf("%d", &prices[i]);
    }
    printf("%d", maxProfit(prices, pricesSize));
}