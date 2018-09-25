#include <stdio.h>

int main(void) {
    int day, month, year;
    printf("Please enter a data (format: mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("your input data is %04d%02d%02d.\n", year, month, day);
    return 0;
}