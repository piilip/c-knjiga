#include <stdbool.h>
#include <stdio.h>

bool has_zero(int a[], int n) {

   int i;
   for (int i = 0; i < n; i++) {
      if (a[i] == 0) {
         return true;
      } else {
         return false;
      }
   }
}

int main(void) {
   int a[] = {1, 2, 3, 3, 3, 2, 2, 3, 3, 3, 0};
   printf("%d", has_zero(a, 11));
   return 0;
}