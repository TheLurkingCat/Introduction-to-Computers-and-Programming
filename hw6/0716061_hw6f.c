#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a > *(int*)b) ? -1 : 1;
}

int maxProfit(int* prices, int pricesSize) {
    int* profits = malloc(pricesSize * sizeof(int));
    int lowest = prices[0], t = 0, profit, last_profit = 0;

    for (int i = 1; i < pricesSize; i++) {
        profit = prices[i] - lowest;
        if (profit > last_profit && profit > 0) {
            profits[t++] = profit;
        } else {
            lowest = prices[i];
        }
        last_profit = profit;
    }

    if (t == 0)
        return 0;

    qsort(profits, t, sizeof(int), cmp);

    if (t == 1)
        return profits[0];

    return profits[0] + profits[1];
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
