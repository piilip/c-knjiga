#include <stdio.h>
int day_of_year(int month, int day, int year) {

   for (int i = 0; i < month; i++) {

      switch (i) {
      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
         day += 31;
         break;
      case 4:
      case 6:
      case 9:
      case 11:
         day += 30;
         break;
      case 2:
         if (year % 4 == 0) {
            day += 29;
         } else {
            day += 28;
         }
         break;
      }
   }
   return day;
}

int main(void) { return 0; }