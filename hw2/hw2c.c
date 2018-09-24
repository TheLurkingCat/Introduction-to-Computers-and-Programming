#include <stdio.h>
int main(void) {
  long long day, month, year;
  printf("Please enter a data (format: dd/mm/yyyy): ");
  scanf("%lld/%lld/%lld", &day, &month, &year);
  printf("your input data is %04lld%02lld%02lld.\n", year, month, day);
  return 0;
}