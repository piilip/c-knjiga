#include <stdio.h>

int main(void) {
   int gcd(int m, int n) {
      int ostatak;
      while (n > 0) {
         ostatak = m % n;

         m = n;
         n = ostatak;
      }
      return m;
   }
   printf("%d", gcd(108, 16));
   return 0;
}