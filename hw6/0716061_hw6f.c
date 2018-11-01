#include <stdio.h>

#define min(X, Y) (X) < (Y) ? (X) : (Y)
#define max(X, Y) (X) > (Y) ? (X) : (Y)

int maxProfit(int* prices, int pricesSize) {
    /* O(N) */
    int arr[100], arr_rev[100], i, j, k, min_value, max_value, ans;

    k = pricesSize - 1;
    min_value = prices[0];
    max_value = prices[k];
    arr_rev[k] = arr[0] = 0;

    for (i = 1; i < pricesSize; i++) {
        j = pricesSize - i;

        arr[i] = max(arr[i - 1], prices[i] - min_value);
        arr_rev[j - 1] = max(arr_rev[j], max_value - prices[j - 1]);

        min_value = min(min_value, prices[i]);
        max_value = max(max_value, prices[j - 1]);
    }

    ans = arr[k];

    for (i = 0; i < k; i++)
        ans = max(ans, arr[i] + arr_rev[i + 1]);

    return ans;
}

int main() {
    int pricesSize, prices[100], i;

    scanf("%d", &pricesSize);
    for (i = 0; i < pricesSize; i++) {
        scanf("%d", &prices[i]);
    }
    printf("%d", maxProfit(prices, pricesSize));
}