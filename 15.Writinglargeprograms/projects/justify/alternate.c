#include "line.h"
#include <stdbool.h>
#include <stdio.h>
void alternate(int a[], int n) {
   int broj = n, i = 0, max, temp;
   n--;
   bool nizi = true;
   while (i != n) {
      max = i;
      for (int j = i; j <= n; j++) {
         if (a[max] < a[j]) {
            max = j;
         }
      }
      if (nizi) {
         temp = a[max];
         a[max] = a[i];
         a[i++] = temp;
      } else {
         temp = a[max];
         a[max] = a[n];
         a[n--] = temp;
      }
      nizi = !nizi;
   }
}

int main(void) {
   int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, -240, -334, 1500};
   median(a, 12);
   for (int i = 0; i < 12; i++) {
      printf(" %d ", a[i]);
   }
}
