#include <stdio.h>

void selection_sort(int n, int a[n]) {
   int max = 0;
   if (n == 0) {
      return;
   }

   for (int i = 0; i < n; i++) {
      if (a[max] < a[i]) {
         max = i;
      }
   }

   int prob = a[n - 1];
   a[n - 1] = a[max];
   a[max] = prob;
   selection_sort(n - 1, a);
}

int main(void) {
   int a[] = {2, 3, 1, 4, 9, 8, 3, 4, 9, 4, 6, 7, 1, 2, 9, 4};
   selection_sort(16, a);
   for (int i = 0; i < 16; i++) {
      printf("%d ", a[i]);
   }

   return 0;
}