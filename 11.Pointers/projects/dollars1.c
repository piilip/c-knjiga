#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
   *twenties = dollars / 20;
   dollars %= 20;
   *tens = dollars / 10;
   dollars %= 10;
   *fives = dollars / 5;
   dollars %= 5;
   *ones = dollars;
}

int main(void) {
   int twenties, tens, fives, ones, dollars;
   printf("Enter dollar amount: ");
   scanf("%d", &dollars);
   pay_amount(dollars, &twenties, &tens, &fives, &ones);
   printf("twenties: %d tens: %d fives: %d ones: %d", twenties, tens, fives,
          ones, dollars);

   return 0;
}