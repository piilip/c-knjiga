#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int gcd(int numerator, int denominator) {
   int remainder;
   while (remainder != 0) {
      remainder = numerator % denominator;
      if (remainder == 0) {
         return denominator < 0 ? (-denominator) : denominator;
      }
      numerator = denominator;
      denominator = remainder;
   }
}
void reduce(int numerator, int denominator, int *reduced_numerator,
            int *reduced_denominator) {
   int g;
   g = gcd(numerator, denominator);
   *reduced_denominator = denominator / g;
   *reduced_numerator = numerator / g;
}

int main(void) {
   int numerator, denominator, reduced_numerator, reduced_denominator;
   printf("Enter numerator and denominator ");
   scanf("%d%d", &numerator, &denominator);
   reduce(numerator, denominator, &reduced_numerator, &reduced_denominator);
   printf("%d/%d", reduced_numerator, reduced_denominator);
   return 0;
}