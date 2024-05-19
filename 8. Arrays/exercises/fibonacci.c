#include <stdio.h>

int main(void) {
   int fib_numbers[40];
   fib_numbers[0] = 0;
   fib_numbers[1] = 1;
   for (int i = 2; i < 40; i++) {
      fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
      printf("%d\n", fib_numbers[i]);
   }

   return 0;
}