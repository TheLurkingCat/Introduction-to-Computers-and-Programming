#include <stdio.h>

int main(void) {
    double celsius;
    printf("Please enter a Celsius temperature: ");
    scanf("%lf", &celsius);
    printf("Fahrenheit temperature is %lf.\n", celsius * 9 / 5 + 32);
    return 0;
}