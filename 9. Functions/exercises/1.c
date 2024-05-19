#include <stdbool.h>
#include <stdio.h>

int main(void) {
   bool check(int x, int y, int n) {

      if (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1) {
         return true;
      } else {
         return false;
      }
   }
   printf("%d", check(-1, 3, 5));

   return 0;
}