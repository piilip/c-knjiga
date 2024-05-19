#include <stdio.h>
#define DAYS 30
#define HOURS 24
int main(void) {
   double sum = 0;
   float temperature_readings[DAYS][HOURS];
   for (int i = 0; i < DAYS; i++) {
      for (int j = 0; j < HOURS; j++) {
         sum += temperature_readings[i][j];
      }
   }
   printf("%lf", sum / (30.0 * 24.0));

   return 0;
}