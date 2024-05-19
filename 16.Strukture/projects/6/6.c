#include <stdio.h>
#include <stdlib.h>
struct date {
   int month, day, year;
};
int compare_dates(struct date d1, struct date d2) {
   if (d1.year > d2.year) {
      return 2;
   } else if (d1.year < d2.year) {
      return 1;
   } else if (d1.month > d2.month) {
      return 2;
   } else if (d1.month < d2.month) {
      return 1;
   } else if (d1.day > d2.day) {
      return 2;
   } else if (d1.day < d2.day) {
      return 1;
   } else {
      return 0;
   }
}

int main(int argc, char const *argv[]) {
   struct date date1, date2;
   printf("Enter first date (mm/dd/yy): ");
   scanf("%d/%d/%d", &date1.month, &date1.day, &date1.year);
   printf("Enter second date (mm/dd/yy): ");
   scanf("%d/%d/%d", &date2.month, &date2.day, &date2.year);
   int i = compare_dates(date1, date2);
   if (i == 2) {
      printf("Date 2 is earlier");
   } else if (i == 1) {
      printf("Date 1 is earlier");

   } else {
      printf("Same date");
   }

   return 0;
}
