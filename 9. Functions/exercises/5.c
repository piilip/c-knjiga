#include <math.h>
#include <stdio.h>
int digit(int n, int k) {
   int len = 0;
   int arr[k];
   int lolk = k;
   while (n > 0) {
      len++;
      if (k > 0) {

         arr[--k] = n % 10;
      }

      n /= 10;
   }
   if (lolk > len) {
      return 0;
   }

   return arr[0];
}
int main(void) {
   printf("%d", digit(15842, 7));
   return 0;
}