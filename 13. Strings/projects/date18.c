#include <stdio.h>
#include <stdlib.h>
int main(void) {
   int day, month, year;
   char *arg[] = {"January",   "February", "March",    "April",
                  "May",       "June",     "July",     "August",
                  "September", "October",  "November", "December"};
   printf("Enter a date (mm/dd/yyyy): ");
   scanf("%d/%d/%d", &month, &day, &year);
   printf("You entered the date %s %d, %d", arg[month - 1], day, year);
}