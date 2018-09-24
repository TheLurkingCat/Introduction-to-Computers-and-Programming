#include <stdio.h>

int main(void) {
    long long day, month, year;
    printf("Please enter a data (format: mm/dd/yyyy): ");
    scanf("%lld/%lld/%lld", &month, &day, &year);
    printf("your input data is %04lld%02lld%02lld.\n", year, month, day);
    return 0;
}