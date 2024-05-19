#include <stdio.h>

int power(int n, int x) {
   if (n == 0) {
      return 1;
   }
   if (n % 2 == 0) {
      int i = power(x, n / 2);
      return i * i;
   } else {

      return x * power(x, n - 1);
   }
}

int main(void) { return 0; }