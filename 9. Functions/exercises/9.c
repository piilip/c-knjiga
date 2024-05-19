#include <stdio.h>

int fact(int n) {

   int sum = n;
   for (int i = 1; i < n - 1; i++) {
      sum *= (n - i);
   }
   return sum;
}

int main(void) {
   int n = fact(5);
   printf("%d", fact(5));

   return 0;
}